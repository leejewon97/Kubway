#include "side.h"
#include "ui_side.h"

side::side(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::side)
{
    ui->setupUi(this);
}

side::~side()
{
    delete ui;
}

void side::on_one_btn_clicked()
{

}

void side::on_set_btn_clicked()
{

}
