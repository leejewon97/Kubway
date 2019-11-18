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

    bread b;
    cheese c;

    c.show();
    return a.exec();
}
