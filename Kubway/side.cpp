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
    ss.setClickOne();
}

void side::on_set_btn_clicked()
{
    ss.show();
}

void side::on_pushButton_back_clicked()
{
    this->hide();
}
