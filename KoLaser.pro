#-------------------------------------------------
#
# Project created by QtCreator 2017-12-31T13:28:17
#
#-------------------------------------------------

QT       += sql core gui

macx {
    QMAKE_CXXFLAGS += -std=c++11 -stdlib=libc++
    QMAKE_LFLAGS += -std=c++11 -stdlib=libc++
    QMAKE_CXXFLAGS += -std=c++1z
    CONFIG += c++17

    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.9
    QMAKE_CXXFLAGS += -mmacosx-version-min=10.9
    QMAKE_LFLAGS += -mmacosx-version-min=10.9
}

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KoLaser
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
        MainWindow.cpp \
    sci_dll_functions.cpp \
    Settings.cpp \
    StatusLabel.cpp \
    LaserStatusWindow.cpp \
    CentralWindow.cpp \
    ProjectDesignWindow.cpp

HEADERS += \
        MainWindow.h \
    sci_dll_functions.h \
    SCModule.h \
    base.h \
    Settings.h \
    LaserStatusWindow.h \
    StatusLabel.h \
    CentralWindow.h \
    ProjectDesignWindow.h

RESOURCES += \
    resources.qrc
