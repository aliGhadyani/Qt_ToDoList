#-------------------------------------------------
#
# Project created by QtCreator 2022-01-03T14:52:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ToDoList-ListBased
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    taskwidget.cpp \
    taskdetail.cpp \
    prioritylist.cpp \
    exitdialogue.cpp \
    newlist.cpp \
    savechanges.cpp \
    spoiler.cpp

HEADERS  += mainwindow.h \
    taskwidget.h \
    definitions.h \
    taskdetail.h \
    prioritylist.h \
    exitdialogue.h \
    newlist.h \
    savechanges.h \
    spoiler.h

FORMS    += mainwindow.ui \
    taskwidget.ui \
    taskdetail.ui \
    prioritylist.ui \
    exitdialogue.ui \
    newlist.ui \
    savechanges.ui

RESOURCES += \
    resources.qrc
