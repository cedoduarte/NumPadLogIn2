#-------------------------------------------------
#
# Project created by QtCreator 2016-06-11T15:56:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NumPadLogIn
TEMPLATE = app


SOURCES += main.cpp\
        NumPadLogInDialog.cpp \
    MainWindow.cpp \
    DuNumericKeyPushButton.cpp

HEADERS  += NumPadLogInDialog.h \
    MainWindow.h \
    DuNumericKeyPushButton.h

FORMS    += NumPadLogInDialog.ui \
    MainWindow.ui

QMAKE_CXXFLAGS += -std=gnu++14

DEFINES -= MY_DEBUG
