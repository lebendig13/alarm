#ifndef ADDALARM_H
#define ADDALARM_H

#include <QDialog>
#include <QDateTime>

namespace Ui {
class addAlarm;
}

struct alarm
{
    QString name;
    QTime time;
    QDate date;
    QString pathFile;
};

class addAlarm : public QDialog
{
    Q_OBJECT

public:
    explicit addAlarm(QWidget *parent = 0);
    ~addAlarm();

//    struct alarm
//    {
//        QString name;
//        QTime time;
//        QDate date;
//        QString pathFile;
//    };

signals:
    void addNewAlarm_signal(alarm);

private slots:
    void setPathFile();
    void addNewAlarm();

private:
    QString pathFile;

private:
    Ui::addAlarm *ui;
};

#endif // ADDALARM_H
