/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *settingsLabel;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *addrSizeLabel;
    QLabel *addrSizeVar;
    QScrollBar *addrSizeNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cacheSizeNumber;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *nWayNumber;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(584, 289);
        Settings->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        settingsLabel = new QLabel(Settings);
        settingsLabel->setObjectName(QString::fromUtf8("settingsLabel"));
        settingsLabel->setMinimumSize(QSize(0, 30));
        settingsLabel->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        settingsLabel->setFont(font);

        verticalLayout->addWidget(settingsLabel);

        line = new QFrame(Settings);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addrSizeLabel = new QLabel(Settings);
        addrSizeLabel->setObjectName(QString::fromUtf8("addrSizeLabel"));
        addrSizeLabel->setMinimumSize(QSize(200, 0));
        addrSizeLabel->setMaximumSize(QSize(200, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(12);
        addrSizeLabel->setFont(font1);
        addrSizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(addrSizeLabel);

        addrSizeVar = new QLabel(Settings);
        addrSizeVar->setObjectName(QString::fromUtf8("addrSizeVar"));
        addrSizeVar->setMinimumSize(QSize(30, 0));
        addrSizeVar->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(addrSizeVar);

        addrSizeNumber = new QScrollBar(Settings);
        addrSizeNumber->setObjectName(QString::fromUtf8("addrSizeNumber"));
        addrSizeNumber->setMinimum(2);
        addrSizeNumber->setMaximum(32);
        addrSizeNumber->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(addrSizeNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 0));
        label->setMaximumSize(QSize(200, 16777215));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        cacheSizeNumber = new QComboBox(Settings);
        cacheSizeNumber->addItem(QString());
        cacheSizeNumber->addItem(QString());
        cacheSizeNumber->addItem(QString());
        cacheSizeNumber->addItem(QString());
        cacheSizeNumber->addItem(QString());
        cacheSizeNumber->setObjectName(QString::fromUtf8("cacheSizeNumber"));

        horizontalLayout_2->addWidget(cacheSizeNumber);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(200, 0));
        label_2->setMaximumSize(QSize(200, 16777215));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        nWayNumber = new QComboBox(Settings);
        nWayNumber->addItem(QString());
        nWayNumber->addItem(QString());
        nWayNumber->addItem(QString());
        nWayNumber->addItem(QString());
        nWayNumber->addItem(QString());
        nWayNumber->addItem(QString());
        nWayNumber->setObjectName(QString::fromUtf8("nWayNumber"));

        horizontalLayout_3->addWidget(nWayNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(Settings);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        settingsLabel->setText(QCoreApplication::translate("Settings", "Cache Settings", nullptr));
        addrSizeLabel->setText(QCoreApplication::translate("Settings", "Address size:", nullptr));
        addrSizeVar->setText(QCoreApplication::translate("Settings", "32", nullptr));
        label->setText(QCoreApplication::translate("Settings", "Cache Size:", nullptr));
        cacheSizeNumber->setItemText(0, QCoreApplication::translate("Settings", "2", nullptr));
        cacheSizeNumber->setItemText(1, QCoreApplication::translate("Settings", "4", nullptr));
        cacheSizeNumber->setItemText(2, QCoreApplication::translate("Settings", "8", nullptr));
        cacheSizeNumber->setItemText(3, QCoreApplication::translate("Settings", "16", nullptr));
        cacheSizeNumber->setItemText(4, QCoreApplication::translate("Settings", "32", nullptr));

        label_2->setText(QCoreApplication::translate("Settings", "?-way associative:", nullptr));
        nWayNumber->setItemText(0, QCoreApplication::translate("Settings", "1", nullptr));
        nWayNumber->setItemText(1, QCoreApplication::translate("Settings", "2", nullptr));
        nWayNumber->setItemText(2, QCoreApplication::translate("Settings", "4", nullptr));
        nWayNumber->setItemText(3, QCoreApplication::translate("Settings", "8", nullptr));
        nWayNumber->setItemText(4, QCoreApplication::translate("Settings", "16", nullptr));
        nWayNumber->setItemText(5, QCoreApplication::translate("Settings", "32", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
