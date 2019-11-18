#include "topping.h"
#include "ui_topping.h"

topping::topping(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topping)
{
    ui->setupUi(this);
}

topping::~topping()
{
    delete ui;
}

void topping::on_pushButton_1_clicked()
{
    ui->label->setText("더블 업");
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_1.png);");
}

void topping::on_pushButton_2_clicked()
{
    ui->label->setText("에그마요");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_2.png);");
}

void topping::on_pushButton_3_clicked()
{
    ui->label->setText("페페로니");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_3.png);");
}

void topping::on_pushButton_4_clicked()
{
    ui->label->setText("베이컨");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_4.png);");
}

void topping::on_pushButton_5_clicked()
{
    ui->label->setText("더블 치즈");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_5.png);");
}

void topping::on_pushButton_6_clicked()
{
    ui->label->setText("오믈렛");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_6.png);");
}

void topping::on_pushButton_7_clicked()
{
    ui->label->setText("아보카도");
    ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_7.png);");
}

void topping::on_pushButton_8_clicked()
{
    ui->label->setText("베이컨 비츠");
    ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_8.png);");
}
