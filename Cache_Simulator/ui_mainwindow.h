/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionAbout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *memoryAccessLabel;
    QFrame *line_3;
    QLabel *addAccessLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *decLabel;
    QLineEdit *decInput;
    QPushButton *addDecButton;
    QFrame *line;
    QTableWidget *memoryAccess;
    QPushButton *clearMemoryAccess;
    QFrame *line_2;
    QVBoxLayout *verticalLayout;
    QLabel *cacheLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetButton;
    QPushButton *executeButton;
    QTableWidget *cacheTable;
    QHBoxLayout *horizontalLayout_2;
    QLabel *hitsLabel;
    QLineEdit *hitsNumber;
    QHBoxLayout *horizontalLayout_3;
    QLabel *missesLabel;
    QLineEdit *missesNumber;
    QMenuBar *menubar;
    QMenu *menuCache;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        memoryAccessLabel = new QLabel(centralwidget);
        memoryAccessLabel->setObjectName(QString::fromUtf8("memoryAccessLabel"));
        memoryAccessLabel->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        memoryAccessLabel->setFont(font);

        verticalLayout_2->addWidget(memoryAccessLabel);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        addAccessLabel = new QLabel(centralwidget);
        addAccessLabel->setObjectName(QString::fromUtf8("addAccessLabel"));
        addAccessLabel->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        addAccessLabel->setFont(font1);

        verticalLayout_2->addWidget(addAccessLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        decLabel = new QLabel(centralwidget);
        decLabel->setObjectName(QString::fromUtf8("decLabel"));
        decLabel->setMinimumSize(QSize(100, 0));
        decLabel->setMaximumSize(QSize(16777215, 16777215));
        decLabel->setFont(font1);

        horizontalLayout_4->addWidget(decLabel);

        decInput = new QLineEdit(centralwidget);
        decInput->setObjectName(QString::fromUtf8("decInput"));
        decInput->setMinimumSize(QSize(200, 0));
        decInput->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(decInput);

        addDecButton = new QPushButton(centralwidget);
        addDecButton->setObjectName(QString::fromUtf8("addDecButton"));
        addDecButton->setMinimumSize(QSize(100, 0));
        addDecButton->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        addDecButton->setFont(font2);

        horizontalLayout_4->addWidget(addDecButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        memoryAccess = new QTableWidget(centralwidget);
        if (memoryAccess->columnCount() < 4)
            memoryAccess->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        memoryAccess->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        memoryAccess->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        memoryAccess->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        memoryAccess->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        memoryAccess->setObjectName(QString::fromUtf8("memoryAccess"));
        memoryAccess->setMinimumSize(QSize(400, 0));
        memoryAccess->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Courier New"));
        font3.setPointSize(12);
        memoryAccess->setFont(font3);
        memoryAccess->horizontalHeader()->setDefaultSectionSize(80);
        memoryAccess->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(memoryAccess);

        clearMemoryAccess = new QPushButton(centralwidget);
        clearMemoryAccess->setObjectName(QString::fromUtf8("clearMemoryAccess"));
        clearMemoryAccess->setFont(font2);

        verticalLayout_2->addWidget(clearMemoryAccess);


        horizontalLayout_5->addLayout(verticalLayout_2);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cacheLabel = new QLabel(centralwidget);
        cacheLabel->setObjectName(QString::fromUtf8("cacheLabel"));
        cacheLabel->setFont(font);
        cacheLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(cacheLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setFont(font2);

        horizontalLayout->addWidget(resetButton);

        executeButton = new QPushButton(centralwidget);
        executeButton->setObjectName(QString::fromUtf8("executeButton"));
        executeButton->setFont(font2);

        horizontalLayout->addWidget(executeButton);


        verticalLayout->addLayout(horizontalLayout);

        cacheTable = new QTableWidget(centralwidget);
        if (cacheTable->columnCount() < 3)
            cacheTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cacheTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        cacheTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        cacheTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        cacheTable->setObjectName(QString::fromUtf8("cacheTable"));
        cacheTable->setEnabled(true);
        cacheTable->setFont(font2);
        cacheTable->setAutoScroll(true);
        cacheTable->setColumnCount(3);
        cacheTable->horizontalHeader()->setDefaultSectionSize(70);
        cacheTable->horizontalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(cacheTable);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        hitsLabel = new QLabel(centralwidget);
        hitsLabel->setObjectName(QString::fromUtf8("hitsLabel"));
        hitsLabel->setMinimumSize(QSize(100, 0));
        hitsLabel->setMaximumSize(QSize(100, 16777215));
        hitsLabel->setFont(font3);
        hitsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(hitsLabel);

        hitsNumber = new QLineEdit(centralwidget);
        hitsNumber->setObjectName(QString::fromUtf8("hitsNumber"));
        hitsNumber->setReadOnly(true);

        horizontalLayout_2->addWidget(hitsNumber);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        missesLabel = new QLabel(centralwidget);
        missesLabel->setObjectName(QString::fromUtf8("missesLabel"));
        missesLabel->setMinimumSize(QSize(100, 0));
        missesLabel->setMaximumSize(QSize(100, 16777215));
        missesLabel->setFont(font3);
        missesLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(missesLabel);

        missesNumber = new QLineEdit(centralwidget);
        missesNumber->setObjectName(QString::fromUtf8("missesNumber"));
        missesNumber->setReadOnly(true);

        horizontalLayout_3->addWidget(missesNumber);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuCache = new QMenu(menubar);
        menuCache->setObjectName(QString::fromUtf8("menuCache"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCache->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuCache->addAction(actionSettings);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Cache Simulator", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        memoryAccessLabel->setText(QCoreApplication::translate("MainWindow", "Memory Access", nullptr));
        addAccessLabel->setText(QCoreApplication::translate("MainWindow", "Add access:", nullptr));
        decLabel->setText(QCoreApplication::translate("MainWindow", "Dec", nullptr));
        addDecButton->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        QTableWidgetItem *___qtablewidgetitem = memoryAccess->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Dec", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = memoryAccess->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Bin", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = memoryAccess->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Hit/Miss", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = memoryAccess->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Cache Block", nullptr));
        clearMemoryAccess->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        cacheLabel->setText(QCoreApplication::translate("MainWindow", "Cache", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        executeButton->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cacheTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Index", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = cacheTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Tag", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = cacheTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        hitsLabel->setText(QCoreApplication::translate("MainWindow", "Hits:", nullptr));
        hitsNumber->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        missesLabel->setText(QCoreApplication::translate("MainWindow", "Misses:", nullptr));
        missesNumber->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        menuCache->setTitle(QCoreApplication::translate("MainWindow", "Cache", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
