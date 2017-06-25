#include "addAlarm.h"
#include "ui_addAlarm.h"

#include <QFileDialog>

#define QS(x) QString::fromUtf8(x)

addAlarm::addAlarm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addAlarm)
{
    ui->setupUi(this);

    QObject::connect(ui->tB_pathFile, SIGNAL(clicked()), this, SLOT(setPathFile()));

    QObject::connect(this, SIGNAL(accepted()), this, SLOT(addNewAlarm()));
}

addAlarm::~addAlarm()
{
    delete ui;
}

void addAlarm::setPathFile()
{
    QWidget w;
    ui->lE_pathFile->setText(QFileDialog::getOpenFileName(&w, QS("Укажите путь к файлу"), QDir::homePath(), QS("*.mp3")));
}

void addAlarm::addNewAlarm()
{
    alarm newAlarm;

    newAlarm.name = ui->lE_name->text();
    newAlarm.time = ui->tE_time->time();
    newAlarm.date = ui->cW_date->selectedDate();
    newAlarm.pathFile = ui->lE_pathFile->text();

    emit addNewAlarm_signal(newAlarm);
}
