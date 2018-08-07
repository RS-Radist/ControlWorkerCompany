#-------------------------------------------------
#
# Project created by QtCreator 2018-07-15T17:56:17
#
#-------------------------------------------------

QT       += core gui sql
QT       += printsupport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kk
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    window.cpp \
    formadmin.cpp \
    Company_Manager/employee.cpp \
    Company_Manager/manager.cpp \
    Company_Manager/sales.cpp \
    dialogclien.cpp

HEADERS += \
        mainwindow.h \
    window.h \
    formadmin.h \
    Company_Manager/Director.h \
    Company_Manager/employee.h \
    Company_Manager/manager.h \
    Company_Manager/sales.h \
    Company_Manager/Under.h \
    dialogclien.h

FORMS += \
        mainwindow.ui \
    formadmin.ui \
    dialogclien.ui
