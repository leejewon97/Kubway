#include "bread.h"
#include "cheese.h"
#include "topping.h"
#include "mainwindow.h"
#include "vegetable.h"
#include "sandwich.h"
#include "sandwich_classic.h"
#include "side_select.h"
#include "side.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow m;
    sandwich s;
    side si;
    m.show();

    return a.exec();
}
