#include "vegetable.h"
#include "ui_vegetable.h"

vegetable::vegetable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vegetable)
{
    ui->setupUi(this);
    flag= true;
}

vegetable::~vegetable()
{
    delete ui;
}

void vegetable::on_pushButton_1_clicked()
{
    ui->label->setText("양상추");
    if(flag == true){
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_1.png);");
        flag = false;
    } else {
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_1.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_2_clicked()
{
    ui->label->setText("토마토");
    if(flag == true){
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_2.png);");
        flag = false;
    } else {
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_2.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_3_clicked()
{
    ui->label->setText("오이");
    if(flag == true){
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_3.png);");
        flag = false;
    } else {
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_3.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_4_clicked()
{
    ui->label->setText("피망");
    if(flag == true){
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_4.png);");
        flag = false;
    } else {
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_4.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_5_clicked()
{
    ui->label->setText("양파");
    if(flag == true){
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_5.png);");
        flag = false;
    } else {
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_5.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_6_clicked()
{
    ui->label->setText("피클");
    if(flag == true){
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_6.png);");
        flag = false;
    } else {
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_6.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_7_clicked()
{
    ui->label->setText("올리브");
    if(flag == true){
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_7.png);");
        flag = false;
    } else {
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_7.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_8_clicked()
{
    ui->label->setText("할라피뇨");
    if(flag == true){
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_8.png);");
        flag = false;
    } else {
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_8.png);");
        flag = true;
    }
}

void vegetable::on_pushButton_back_clicked()
{
    this->hide();
}
