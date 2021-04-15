#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "helper.h"
#include "cache.h"
#include "settings.h"
#include "aboutwindow.h"

#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _cache = new Cache(5, 8, 2);

    QStringList cacheHeaders;
    cacheHeaders.append("Index");
    for (int i = 0; i < _cache->ways(); i ++) {
        cacheHeaders.append("tag");
        cacheHeaders.append("data");
    }
    ui->memoryAccess->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->cacheTable->clear();
    ui->cacheTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->cacheTable->setColumnCount(1 + 2 * _cache->ways());
    ui->cacheTable->setHorizontalHeaderLabels(cacheHeaders);
    connect(ui->addDecButton, &QPushButton::clicked, this, &MainWindow::addDec);
    connect(ui->clearMemoryAccess, &QPushButton::clicked, this, &MainWindow::clearMemoryAccess);
    connect(ui->executeButton, &QPushButton::clicked, this, &MainWindow::executeAll);
    connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::resetCache);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addDec() {
    QString input = ui->decInput->text();
    int addr = input.toInt();
    QString bAddr = Helper::toBinary(addr, _cache->addrBits());
    if (bAddr.length() > _cache->addrBits()) {
        QMessageBox alert(this);
        alert.setText("Please make sure your input's binary is within the range of current address size.");
        alert.exec();
        return;
    }
    ui->memoryAccess->insertRow(ui->memoryAccess->rowCount());
    int index = ui->memoryAccess->rowCount() - 1;
    ui->memoryAccess->setItem(index, 0, new QTableWidgetItem(QString::number(addr)));
    ui->memoryAccess->setItem(index, 1, new QTableWidgetItem(bAddr));
    ui->memoryAccess->setItem(index, 3, new QTableWidgetItem(bAddr.right(_cache->bits())));
    ui->decInput->setFocus();
    ui->decInput->selectAll();
}

void MainWindow::clearMemoryAccess() {
    int n = ui->memoryAccess->rowCount();
    for (int i = 0; i < n; i ++) {
        ui->memoryAccess->removeRow(0);
    }
}

void MainWindow::executeAll() {
    int n = ui->cacheTable->rowCount();
    for (int i = 0; i < n; i ++) {
        ui->cacheTable->removeRow(0);
    }

    n = ui->memoryAccess->rowCount();
    for (int i = 0; i < n; i ++) {
        Cache::Sect* hit = _cache->loadAddr(ui->memoryAccess->item(i, 0)->text().toInt());
        QString hitMsg = "Miss";
        if (hit) hitMsg = "Hit";
        ui->memoryAccess->setItem(i, 2, new QTableWidgetItem(hitMsg));
    }
    QVector<QVector<Cache::Sect>> cache = _cache->data();

    for (int i = 0; i < cache.size(); i ++) {
        ui->cacheTable->insertRow(ui->cacheTable->rowCount());
        int index = ui->cacheTable->rowCount() - 1;
        ui->cacheTable->setItem(index, 0, new QTableWidgetItem(Helper::toBinary(i, _cache->bits())));
        for (Cache::Sect &sect : cache[i]) {
            ui->cacheTable->setItem(index, sect.index * 2 + 1, new QTableWidgetItem(sect.tag));
            ui->cacheTable->setItem(index, sect.index * 2 + 2, new QTableWidgetItem("M[" + QString::number(sect.data) + "]"));
        }
    }
    ui->hitsNumber->setText(QString::number(_cache->hits()));
    ui->missesNumber->setText(QString::number(_cache->misses()));
    ui->executeButton->setEnabled(false);
}

void MainWindow::resetCache() {
    int n = ui->cacheTable->rowCount();
    for (int i = 0; i < n; i ++) {
        ui->cacheTable->removeRow(0);
    }
    n = ui->memoryAccess->rowCount();
    for (int i = 0; i < n; i ++) {
        ui->memoryAccess->setItem(i, 2, new QTableWidgetItem(""));
    }
    _cache->reset();
    ui->executeButton->setEnabled(true);
    ui->hitsNumber->setText("0");
    ui->missesNumber->setText("0");
}

void MainWindow::on_actionSettings_triggered() {
    int addrSize = _cache->addrBits();
    int cacheSize = _cache->data().size() * _cache->ways();
    int nWays = _cache->ways();

    int* addrSizePTR = &addrSize;
    int* cacheSizePTR = &cacheSize;
    int* nWayPTR = &nWays;

    Settings settings(this, addrSizePTR, cacheSizePTR, nWayPTR);
    int ans = settings.exec();

    switch (ans) {
    case QDialog::Accepted: {
        _cache->reset(addrSize, cacheSize, nWays);
        reset();
        break;
    }
    case QDialog::Rejected: {
        break;
    }
    }
}

void MainWindow::reset() {
    resetCache();
    clearMemoryAccess();
    QStringList cacheHeaders;
    cacheHeaders.append("Index");
    for (int i = 0; i < _cache->ways(); i ++) {
        cacheHeaders.append("tag");
        cacheHeaders.append("data");
    }
    ui->cacheTable->clear();
    ui->cacheTable->setColumnCount(1 + 2 * _cache->ways());
    ui->cacheTable->setHorizontalHeaderLabels(cacheHeaders);
}

void MainWindow::on_actionAbout_triggered()
{
    AboutWindow about(this);
    about.exec();
}
