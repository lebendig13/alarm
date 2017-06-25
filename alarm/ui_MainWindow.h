/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pB_addAlarm;
    QPushButton *pB_allOff;
    QTimeEdit *tE_clock;
    QTableWidget *tW_alarms;
    QGridLayout *gridLayout;
    QLabel *label;
    QTimeEdit *tE_restTime;
    QPushButton *pB_turnOn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(528, 347);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pB_addAlarm = new QPushButton(centralWidget);
        pB_addAlarm->setObjectName(QString::fromUtf8("pB_addAlarm"));

        gridLayout_2->addWidget(pB_addAlarm, 0, 1, 1, 1);

        pB_allOff = new QPushButton(centralWidget);
        pB_allOff->setObjectName(QString::fromUtf8("pB_allOff"));

        gridLayout_2->addWidget(pB_allOff, 0, 2, 1, 1);

        tE_clock = new QTimeEdit(centralWidget);
        tE_clock->setObjectName(QString::fromUtf8("tE_clock"));

        gridLayout_2->addWidget(tE_clock, 1, 0, 1, 1);

        tW_alarms = new QTableWidget(centralWidget);
        tW_alarms->setObjectName(QString::fromUtf8("tW_alarms"));

        gridLayout_2->addWidget(tW_alarms, 1, 1, 2, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tE_restTime = new QTimeEdit(centralWidget);
        tE_restTime->setObjectName(QString::fromUtf8("tE_restTime"));

        gridLayout->addWidget(tE_restTime, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        pB_turnOn = new QPushButton(centralWidget);
        pB_turnOn->setObjectName(QString::fromUtf8("pB_turnOn"));

        gridLayout_2->addWidget(pB_turnOn, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 528, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pB_addAlarm->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\261\321\203\320\264\320\270\320\273\321\214\320\275\320\270\320\272", 0, QApplication::UnicodeUTF8));
        pB_allOff->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\262\321\201\320\265", 0, QApplication::UnicodeUTF8));
        tE_clock->setDisplayFormat(QApplication::translate("MainWindow", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214:", 0, QApplication::UnicodeUTF8));
        pB_turnOn->setText(QApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\261\321\203\320\264\320\270\320\273\321\214\320\275\320\270\320\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
