#include "topping.h"
#include "ui_topping.h"

topping::topping(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topping)
{
    ui->setupUi(this);
    flag= true;
}

topping::~topping()
{
    delete ui;
}

void topping::on_pushButton_1_clicked()
{
    ui->label->setText("더블 업");
    if(flag == true){
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_1.png);");
        flag = false;
    } else {
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_1.png);");
        flag = true;
    }
}

void topping::on_pushButton_2_clicked()
{
    ui->label->setText("에그마요");
    if(flag == true){
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_2.png);");
        flag = false;
    } else {
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_2.png);");
        flag = true;
    }
}

void topping::on_pushButton_3_clicked()
{
    ui->label->setText("페페로니");
    if(flag == true){
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_3.png);");
        flag = false;
    } else {
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_3.png);");
        flag = true;
    }
}

void topping::on_pushButton_4_clicked()
{
    ui->label->setText("베이컨");
    if(flag == true){
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_4.png);");
        flag = false;
    } else {
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_4.png);");
        flag = true;
    }
}

void topping::on_pushButton_5_clicked()
{
    ui->label->setText("더블 치즈");
    if(flag == true){
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_5.png);");
        flag = false;
    } else {
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_5.png);");
        flag = true;
    }
}

void topping::on_pushButton_6_clicked()
{
    ui->label->setText("오믈렛");
    if(flag == true){
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_6.png);");
        flag = false;
    } else {
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_6.png);");
        flag = true;
    }
}

void topping::on_pushButton_7_clicked()
{
    ui->label->setText("아보카도");
    if(flag == true){
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_7.png);");
        flag = false;
    } else {
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_7.png);");
        flag = true;
    }
}

void topping::on_pushButton_8_clicked()
{
    ui->label->setText("베이컨 비츠");
    if(flag == true){
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_8.png);");
        flag = false;
    } else {
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_8.png);");
        flag = true;
    }
}

void topping::on_pushButton_next_clicked()
{
    v.show();
}

void topping::on_pushButton_back_clicked()
{
    this->hide();
}
