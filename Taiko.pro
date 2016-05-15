#-------------------------------------------------
#
# Project created by QtCreator 2016-05-06T06:57:33
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Taiko
TEMPLATE = app


SOURCES += main.cpp\
    form.cpp \
    myrect.cpp \
    drum.cpp \
    score.cpp \
    time.cpp \
    end.cpp \
    game.cpp \
    drum_1.cpp

HEADERS  += \
    form.h \
    myrect.h \
    drum.h \
    score.h \
    time.h \
    end.h \
    game.h \
    drum_1.h

FORMS    += \
    form.ui \
    end.ui

RESOURCES += \
    pic.qrc \
    drum.qrc \
    end.qrc \
    sound.qrc
