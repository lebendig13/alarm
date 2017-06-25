#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>

#define QS(x) QString::fromUtf8(x)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->pB_addAlarm, SIGNAL(clicked()), this, SLOT(addAlarmClock()));
    QObject::connect(ui->pB_allOff, SIGNAL(clicked()), this, SLOT(allTurnOff()));
    QObject::connect(ui->pB_turnOn, SIGNAL(clicked()), this, SLOT(turnOn()));



    initTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addAlarmClock()
{
    addNewAl = new addAlarm(this);

    QObject::connect(addNewAl, SIGNAL(addNewAlarm_signal(alarm)), this, SLOT(process(alarm)));

    addNewAl->show();
}

void MainWindow::allTurnOff()
{

}

void MainWindow::turnOn()
{

}

void MainWindow::process(alarm newAlarm)
{
    qDebug() << "newAlarm";
    qDebug() << newAlarm.name;

    int row = 0;

    ui->tW_alarms->setItem(row, 0, new QTableWidgetItem("1"));
    ui->tW_alarms->setItem(row, 1, new QTableWidgetItem(newAlarm.name));
    ui->tW_alarms->setItem(row, 2, new QTableWidgetItem(newAlarm.time.toString()));
    ui->tW_alarms->setItem(row, 3, new QTableWidgetItem(newAlarm.date.toString()));
    ui->tW_alarms->setItem(row, 4, new QTableWidgetItem(""));
}

void MainWindow::initTable()
{
    ui->tW_alarms->clear();
    ui->tW_alarms->setColumnCount(5);

    QStringList header;
    header << QS("№") << QS("Имя") << QS("Время") << QS("Расписание") << QS("Вкл");
    ui->tW_alarms->setHorizontalHeaderLabels(header);

    ui->tW_alarms->resizeColumnsToContents();

    ui->tW_alarms->setRowCount(5);
}
