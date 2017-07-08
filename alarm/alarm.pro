#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T21:57:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = alarm
TEMPLATE = app

CONFIG += c++11

include(../alarm/qtxlsx/src/xlsx/qtxlsx.pri)


SOURCES += main.cpp\
           MainWindow.cpp \
           addAlarm.cpp

HEADERS  += MainWindow.h \
            addAlarm.h

FORMS    += MainWindow.ui \
            addAlarm.ui


