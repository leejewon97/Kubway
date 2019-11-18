#include "bread.h"
#include "cheese.h"
#include "topping.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bread b;
    cheese c;
    mainwindow m;
    topping t;
    m.show();

    return a.exec();
}
