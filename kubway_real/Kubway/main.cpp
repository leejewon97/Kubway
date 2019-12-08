#include "bread.h"
#include "cheese.h"
#include "topping.h"
#include "mainwindow.h"
#include "vegetable.h"
#include "sandwich.h"
#include "sandwich_classic.h"
#include "side_select.h"
#include "side.h"

#include <QTextCodec>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QFont font;
    font.setFamily(codec->toUnicode("맑은 고딕"));
    font.setPointSize(14);
    font.setBold(true);
    a.setFont(font);
    */

    mainwindow m;
    recipe r;

    m.show();
    //r.show();


    return a.exec();


}
