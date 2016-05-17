#-------------------------------------------------
#
# Project created by QtCreator 2016-05-01T17:01:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyQwtTest
TEMPLATE = app

CONFIG  +=  qwt

LIBS    +=  -L/usr/local/qwt-6.1.2/lib -lqwt

INCLUDEPATH   +=  /usr/local/qwt-6.1.2/include



SOURCES += main.cpp\
        mainwindow.cpp \
    myplotgraph.cpp

HEADERS  += mainwindow.h \
    myplotgraph.h
