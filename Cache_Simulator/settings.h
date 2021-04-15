#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr, int* addrSize = nullptr, int* cacheSize = nullptr, int* nWay = nullptr);
    ~Settings();

    void setAddrSize();
    void setCacheSize();
    void setNWay();

private:
    Ui::Settings *ui;
    int* _addrSize;
    int* _cacheSize;
    int* _nWay;
};

#endif // SETTINGS_H
