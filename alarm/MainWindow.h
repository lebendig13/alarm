#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "addAlarm.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void addAlarmClock();
    void allTurnOff();
    void turnOn();

    void process(alarm);

private:


    void initTable();



private:
    addAlarm* addNewAl;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
