/********************************************************************************
** Form generated from reading UI file 'addAlarm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDALARM_H
#define UI_ADDALARM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_addAlarm
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lE_name;
    QTimeEdit *tE_time;
    QLineEdit *lE_pathFile;
    QToolButton *tB_pathFile;
    QCalendarWidget *cW_date;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addAlarm)
    {
        if (addAlarm->objectName().isEmpty())
            addAlarm->setObjectName(QString::fromUtf8("addAlarm"));
        addAlarm->resize(283, 370);
        gridLayout = new QGridLayout(addAlarm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lE_name = new QLineEdit(addAlarm);
        lE_name->setObjectName(QString::fromUtf8("lE_name"));

        gridLayout->addWidget(lE_name, 0, 0, 1, 2);

        tE_time = new QTimeEdit(addAlarm);
        tE_time->setObjectName(QString::fromUtf8("tE_time"));

        gridLayout->addWidget(tE_time, 1, 0, 1, 1);

        lE_pathFile = new QLineEdit(addAlarm);
        lE_pathFile->setObjectName(QString::fromUtf8("lE_pathFile"));

        gridLayout->addWidget(lE_pathFile, 1, 1, 1, 1);

        tB_pathFile = new QToolButton(addAlarm);
        tB_pathFile->setObjectName(QString::fromUtf8("tB_pathFile"));

        gridLayout->addWidget(tB_pathFile, 1, 2, 1, 1);

        cW_date = new QCalendarWidget(addAlarm);
        cW_date->setObjectName(QString::fromUtf8("cW_date"));
        cW_date->setGridVisible(false);
        cW_date->setSelectionMode(QCalendarWidget::SingleSelection);
        cW_date->setDateEditEnabled(true);

        gridLayout->addWidget(cW_date, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(addAlarm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(addAlarm);
        QObject::connect(buttonBox, SIGNAL(accepted()), addAlarm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addAlarm, SLOT(reject()));

        QMetaObject::connectSlotsByName(addAlarm);
    } // setupUi

    void retranslateUi(QDialog *addAlarm)
    {
        addAlarm->setWindowTitle(QApplication::translate("addAlarm", "Dialog", 0, QApplication::UnicodeUTF8));
        tE_time->setDisplayFormat(QApplication::translate("addAlarm", "HH:mm", 0, QApplication::UnicodeUTF8));
        tB_pathFile->setText(QApplication::translate("addAlarm", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addAlarm: public Ui_addAlarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDALARM_H
