#include "settings.h"
#include "ui_settings.h"

#include <math.h>
#include <QString>

Settings::Settings(QWidget *parent, int* addrSize, int* cacheSize, int* nWay) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    _addrSize = addrSize;
    _cacheSize = cacheSize;
    _nWay = nWay;
    ui->addrSizeNumber->setValue(*_addrSize);
    ui->addrSizeVar->setText(QString::number(ui->addrSizeNumber->value()));
    ui->cacheSizeNumber->setCurrentIndex((int)round(log2(*_cacheSize)) - 1);
    ui->nWayNumber->setCurrentIndex((int)round(log2(*_nWay)));

    connect(ui->addrSizeNumber, SIGNAL(valueChanged(int)), this, SLOT(setAddrSize()));
    connect(ui->cacheSizeNumber, SIGNAL(currentIndexChanged(int)), this, SLOT(setCacheSize()));
    connect(ui->nWayNumber, SIGNAL(currentIndexChanged(int)), this, SLOT(setNWay()));
}

Settings::~Settings()
{
    delete ui;
}

void Settings::setAddrSize() {
    *_addrSize = ui->addrSizeNumber->value();
    ui->addrSizeVar->setText(QString::number(ui->addrSizeNumber->value()));
}

void Settings::setCacheSize() {
    *_cacheSize = (int)round(pow(2, ui->cacheSizeNumber->currentIndex() + 1));
}

void Settings::setNWay() {
    *_nWay = (int)round(pow(2, ui->nWayNumber->currentIndex()));
}
