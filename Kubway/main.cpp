#include "widget.h"
#include "cheese.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    cheese c;
    c.show();

    return a.exec();
}
