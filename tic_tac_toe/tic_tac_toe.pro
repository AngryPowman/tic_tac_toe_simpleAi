#-------------------------------------------------
#
# Project created by QtCreator 2014-10-10T19:19:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tic_tac_toe
TEMPLATE = app
QMAKE_MAC_SDK = macosx10.9

SOURCES += main.cpp\
        mainwindow.cpp \
    tictactoe_view.cpp \
    tictactoe_model.cpp \
    tictactoe.cpp

HEADERS  += mainwindow.h \
    tictactoe_view.h \
    tictactoe_model.h \
    common.h \
    tictactoe.h \
    mvc.h
