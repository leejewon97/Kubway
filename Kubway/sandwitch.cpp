#include "sandwitch.h"
#include "ui_sandwitch.h"

sandwitch::sandwitch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwitch)
{
    ui->setupUi(this);
}

sandwitch::~sandwitch()
{
    delete ui;
}

void sandwitch::on_pushButton_1_clicked()
{
    sc.show();
}

void sandwitch::on_pushButton_2_clicked()
{
    sf.show();
}

void sandwitch::on_pushButton_3_clicked()
{
    sn.show();
}

void sandwitch::on_pushButton_4_clicked()
{
    sp.show();
}
