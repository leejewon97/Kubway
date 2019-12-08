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
        card_or_cash.cpp \
        cheese.cpp \
        for_back.cpp \
        main.cpp \
        mainwindow.cpp \
        order_done.cpp \
        pay_or_order.cpp \
        payment.cpp \
        recipe.cpp \
        sandwich.cpp \
        sandwich_classic.cpp \
        sandwich_fresh.cpp \
        sandwich_new.cpp \
        sandwich_premium.cpp \
        sauce.cpp \
        side.cpp \
        side_select.cpp \
        topping.cpp \
        vegetable.cpp

HEADERS += \
        bread.h \
        card_or_cash.h \
        cheese.h \
        extra.h \
        for_back.h \
        mainwindow.h \
        order_done.h \
        pay_or_order.h \
        payment.h \
        recipe.h \
        sandwich.h \
        sandwich_back.h \
        sandwich_classic.h \
        sandwich_fresh.h \
        sandwich_new.h \
        sandwich_premium.h \
        sauce.h \
        side.h \
        side_select.h \
        topping.h \
        vegetable.h

FORMS += \
        bread.ui \
        card_or_cash.ui \
        cheese.ui \
        for_back.ui \
        mainwindow.ui \
        order_done.ui \
        pay_or_order.ui \
        payment.ui \
        recipe.ui \
        sandwich.ui \
        sandwich_classic.ui \
        sandwich_fresh.ui \
        sandwich_new.ui \
        sandwich_premium.ui \
        sauce.ui \
        side.ui \
        side_select.ui \
        topping.ui \
        vegetable.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    image/bread_page/bread_page_back.png \
    image/bread_page/click_off/bread_1.png \
    image/bread_page/click_off/bread_2.png \
    image/bread_page/click_off/bread_3.png \
    image/bread_page/click_off/bread_4.png \
    image/bread_page/click_off/bread_5.png \
    image/bread_page/click_off/bread_6.png \
    image/bread_page/click_on/bread_1.png \
    image/bread_page/click_on/bread_2.png \
    image/bread_page/click_on/bread_3.png \
    image/bread_page/click_on/bread_4.png \
    image/bread_page/click_on/bread_5.png \
    image/bread_page/click_on/bread_6.png \
    image/button/Forward Arrow.png \
    image/button/Forward Arrow.png \
    image/button/go_back_btn.png \
    image/button/hot_btn.png \
    image/button/new_btn.png \
    image/button/square_1067.png \
    image/cheese_page/cheese_page_back.png \
    image/cheese_page/click_off/cheese_1.png \
    image/cheese_page/click_off/cheese_2.png \
    image/cheese_page/click_off/cheese_3.png \
    image/cheese_page/click_on/cheese_1.png \
    image/cheese_page/click_on/cheese_2.png \
    image/cheese_page/click_on/cheese_3.png \
    image/main_page/back.png \
    image/main_page/btn1.png \
    image/main_page/btn2.png \
    image/menu_page/back.png \
    image/menu_page/box_1.png \
    image/menu_page/box_2.png \
    image/menu_page/box_3.png \
    image/menu_page/box_4.png \
    image/order_done_page/back.png \
    image/order_done_page/main_btn.png \
    image/pay_or_order_page/back.png \
    image/pay_or_order_page/pay_btn.png \
    image/pay_or_order_page/plus_btn.png \
    image/payment_page/back.png \
    image/payment_page/card_btn.png \
    image/payment_page/cash_btn.png \
    image/payment_page_2/back.png \
    image/payment_page_2/money_back.png \
    image/receipt_page/back.png \
    image/receipt_page/receipt.png \
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
    image/sandwich_page/classic/click_off/t_6.png \
    image/sandwich_page/classic/click_on/t_1.png \
    image/sandwich_page/classic/click_on/t_2.png \
    image/sandwich_page/classic/click_on/t_3.png \
    image/sandwich_page/classic/click_on/t_4.png \
    image/sandwich_page/classic/click_on/t_5.png \
    image/sandwich_page/classic/click_on/t_6.png \
    image/sandwich_page/fresh/click_off/t_1.png \
    image/sandwich_page/fresh/click_off/t_2.png \
    image/sandwich_page/fresh/click_off/t_3.png \
    image/sandwich_page/fresh/click_off/t_4.png \
    image/sandwich_page/fresh/click_off/t_5.png \
    image/sandwich_page/fresh/click_off/t_6.png \
    image/sandwich_page/fresh/click_on/t_1.png \
    image/sandwich_page/fresh/click_on/t_2.png \
    image/sandwich_page/fresh/click_on/t_3.png \
    image/sandwich_page/fresh/click_on/t_4.png \
    image/sandwich_page/fresh/click_on/t_5.png \
    image/sandwich_page/fresh/click_on/t_6.png \
    image/sandwich_page/new/click_off/t_1.png \
    image/sandwich_page/new/click_off/t_2.png \
    image/sandwich_page/new/click_off/t_3.png \
    image/sandwich_page/new/click_off/t_4.png \
    image/sandwich_page/new/click_off/t_5.png \
    image/sandwich_page/new/click_off/t_6.png \
    image/sandwich_page/new/click_on/t_1.png \
    image/sandwich_page/new/click_on/t_2.png \
    image/sandwich_page/new/click_on/t_3.png \
    image/sandwich_page/new/click_on/t_4.png \
    image/sandwich_page/new/click_on/t_5.png \
    image/sandwich_page/new/click_on/t_6.png \
    image/sandwich_page/premium/click_off/t_1.png \
    image/sandwich_page/premium/click_off/t_10.png \
    image/sandwich_page/premium/click_off/t_2.png \
    image/sandwich_page/premium/click_off/t_3.png \
    image/sandwich_page/premium/click_off/t_4.png \
    image/sandwich_page/premium/click_off/t_5.png \
    image/sandwich_page/premium/click_off/t_6.png \
    image/sandwich_page/premium/click_off/t_7.png \
    image/sandwich_page/premium/click_off/t_8.png \
    image/sandwich_page/premium/click_off/t_9.png \
    image/sandwich_page/premium/click_on/t_1.png \
    image/sandwich_page/premium/click_on/t_10.png \
    image/sandwich_page/premium/click_on/t_2.png \
    image/sandwich_page/premium/click_on/t_3.png \
    image/sandwich_page/premium/click_on/t_4.png \
    image/sandwich_page/premium/click_on/t_5.png \
    image/sandwich_page/premium/click_on/t_6.png \
    image/sandwich_page/premium/click_on/t_7.png \
    image/sandwich_page/premium/click_on/t_8.png \
    image/sandwich_page/premium/click_on/t_9.png \
    image/sauce_page/click_off/sauce_1.png \
    image/sauce_page/click_off/sauce_10.png \
    image/sauce_page/click_off/sauce_11.png \
    image/sauce_page/click_off/sauce_12.png \
    image/sauce_page/click_off/sauce_13.png \
    image/sauce_page/click_off/sauce_14.png \
    image/sauce_page/click_off/sauce_15.png \
    image/sauce_page/click_off/sauce_16.png \
    image/sauce_page/click_off/sauce_2.png \
    image/sauce_page/click_off/sauce_3.png \
    image/sauce_page/click_off/sauce_4.png \
    image/sauce_page/click_off/sauce_5.png \
    image/sauce_page/click_off/sauce_6.png \
    image/sauce_page/click_off/sauce_7.png \
    image/sauce_page/click_off/sauce_8.png \
    image/sauce_page/click_off/sauce_9.png \
    image/sauce_page/click_on/sauce_1.png \
    image/sauce_page/click_on/sauce_10.png \
    image/sauce_page/click_on/sauce_11.png \
    image/sauce_page/click_on/sauce_12.png \
    image/sauce_page/click_on/sauce_13.png \
    image/sauce_page/click_on/sauce_14.png \
    image/sauce_page/click_on/sauce_15.png \
    image/sauce_page/click_on/sauce_16.png \
    image/sauce_page/click_on/sauce_2.png \
    image/sauce_page/click_on/sauce_3.png \
    image/sauce_page/click_on/sauce_4.png \
    image/sauce_page/click_on/sauce_5.png \
    image/sauce_page/click_on/sauce_6.png \
    image/sauce_page/click_on/sauce_7.png \
    image/sauce_page/click_on/sauce_8.png \
    image/sauce_page/click_on/sauce_9.png \
    image/sauce_page/sauce_page_back.png \
    image/side_page/back.png \
    image/side_page/btn_one.png \
    image/side_page/btn_set.png \
    image/sideselect_page/click_off/t_1.png \
    image/sideselect_page/click_off/t_2.png \
    image/sideselect_page/click_off/t_3.png \
    image/sideselect_page/click_off/t_4.png \
    image/sideselect_page/click_off/t_5.png \
    image/sideselect_page/click_off/t_7.png \
    image/sideselect_page/click_off/t_8.png \
    image/sideselect_page/click_on/t_1.png \
    image/sideselect_page/click_on/t_2.png \
    image/sideselect_page/click_on/t_3.png \
    image/sideselect_page/click_on/t_4.png \
    image/sideselect_page/click_on/t_5.png \
    image/sideselect_page/click_on/t_7.png \
    image/sideselect_page/click_on/t_8.png \
    image/sideselect_page/drink_pass.png \
    image/sideselect_page/img_1.png \
    image/sideselect_page/side_page_back.png \
    image/size_select_page/15_btn.png \
    image/size_select_page/30_btn.png \
    image/size_select_page/back.png \
    image/subway_images.zip \
    image/subway_prototype.xd \
    image/topping_page/click_off/t_1.png \
    image/topping_page/click_off/t_2.png \
    image/topping_page/click_off/t_3.png \
    image/topping_page/click_off/t_4.png \
    image/topping_page/click_off/t_5.png \
    image/topping_page/click_off/t_6.png \
    image/topping_page/click_off/t_7.png \
    image/topping_page/click_off/t_8.png \
    image/topping_page/click_on/t_1.png \
    image/topping_page/click_on/t_2.png \
    image/topping_page/click_on/t_3.png \
    image/topping_page/click_on/t_4.png \
    image/topping_page/click_on/t_5.png \
    image/topping_page/click_on/t_6.png \
    image/topping_page/click_on/t_7.png \
    image/topping_page/click_on/t_8.png \
    image/topping_page/topping_page_back.png \
    image/transparent.png \
    image/vegetable_page/click_off/t_1.png \
    image/vegetable_page/click_off/t_2.png \
    image/vegetable_page/click_off/t_3.png \
    image/vegetable_page/click_off/t_4.png \
    image/vegetable_page/click_off/t_5.png \
    image/vegetable_page/click_off/t_6.png \
    image/vegetable_page/click_off/t_7.png \
    image/vegetable_page/click_off/t_8.png \
    image/vegetable_page/click_on/t_1.png \
    image/vegetable_page/click_on/t_2.png \
    image/vegetable_page/click_on/t_3.png \
    image/vegetable_page/click_on/t_4.png \
    image/vegetable_page/click_on/t_5.png \
    image/vegetable_page/click_on/t_6.png \
    image/vegetable_page/click_on/t_7.png \
    image/vegetable_page/click_on/t_8.png \
    image/vegetable_page/more_variety.png \
    image/vegetable_page/vegetable_page_back.png
