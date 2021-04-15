#include "settings.h"
#include "ui_settings.h"

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

    connect(ui->addrSizeNumber, &QScrollBar::valueChanged, this, &Settings::setAddrSize);
    connect(ui->cacheSizeNumber, &QComboBox::currentIndexChanged, this, &Settings::setCacheSize);
    connect(ui->nWayNumber, &QComboBox::currentIndexChanged, this, &Settings::setNWay);
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
