#-------------------------------------------------
#
# Project created by Hacking Off 2014-11-15T16:36:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bailar
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    save_broadcast.cpp \
    possible_chords.cpp \
    smart_shuffle.cpp

HEADERS  += mainwindow.h \
    save_broadcast.h \
    possible_chords.h \
    smart_shuffle.h

FORMS    += mainwindow.ui \
    save_broadcast.ui \
    possible_chords.ui \
    smart_shuffle.ui

RESOURCES += \
    rsc.qrc
