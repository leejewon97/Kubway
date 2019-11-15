#include "mainwindow.h"
#include "cheese.h"
#include "vegetable.h"
#include "topping.h"
#include "bread.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    cheese c;
    vegetable v;
    topping t;
    bread b;
    w.show();
    c.show();
    v.show();
    t.show();
    b.show();
    return a.exec();
}
