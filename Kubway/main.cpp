#include "bread.h"
#include "cheese.h"
#include "topping.h"
#include "mainwindow.h"
#include "vegetable.h"
#include "sandwitch.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow m;
    m.show();

    return a.exec();
}
