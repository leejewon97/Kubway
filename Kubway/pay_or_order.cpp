#include "pay_or_order.h"
#include "ui_pay_or_order.h"

pay_or_order::pay_or_order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pay_or_order)
{
    ui->setupUi(this);
}

pay_or_order::~pay_or_order()
{
    delete ui;
}

void pay_or_order::on_pay_btn_clicked()
{
    coc.show();
}

void pay_or_order::on_order_btn_clicked()
{

}

void pay_or_order::on_pushButton_back_clicked()
{
    this->hide();
}