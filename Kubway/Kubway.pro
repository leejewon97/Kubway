#-------------------------------------------------
#
# Project created by QtCreator 2019-11-12T16:29:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kubway
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

CONFIG += c++11

SOURCES += \
        bread.cpp \
        cheese.cpp \
        main.cpp \
        mainwindow.cpp \
        sandwitch.cpp \
        sandwitch_classic.cpp \
        sandwitch_fresh.cpp \
        sandwitch_new.cpp \
        sandwitch_premium.cpp \
        topping.cpp \
        vegetable.cpp

HEADERS += \
        bread.h \
        cheese.h \
        mainwindow.h \
        sandwitch.h \
        sandwitch_classic.h \
        sandwitch_fresh.h \
        sandwitch_new.h \
        sandwitch_premium.h \
        topping.h \
        vegetable.h

FORMS += \
        bread.ui \
        cheese.ui \
        mainwindow.ui \
        sandwitch.ui \
        sandwitch_classic.ui \
        sandwitch_fresh.ui \
        sandwitch_new.ui \
        sandwitch_premium.ui \
        topping.ui \
        vegetable.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc \
    res.qrc

DISTFILES += \
    image/sandwich_page/after_btn.png \
    image/sandwich_page/background_sandwich_classic.png \
    image/sandwich_page/background_sandwich_fresh.png \
    image/sandwich_page/background_sandwich_new.png \
    image/sandwich_page/background_sandwich_premium.png \
    image/sandwich_page/before_btn.png \
    image/sandwich_page/classic/click_off/t_1.png \
    image/sandwich_page/classic/click_off/t_2.png \
    image/sandwich_page/classic/click_off/t_3.png \
    image/sandwich_page/classic/click_off/t_4.png \
    image/sandwich_page/classic/click_off/t_5.png \
    image/sandwich_page/classic/click_off/t_6.png
