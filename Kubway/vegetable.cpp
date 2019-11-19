#include "vegetable.h"
#include "ui_vegetable.h"

vegetable::vegetable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vegetable)
{
    ui->setupUi(this);
    for (int i = 0; i < 8; i++) {
        flag[i] = true;
    }
}

vegetable::~vegetable()
{
    delete ui;
}

void vegetable::on_pushButton_1_clicked()
{
    if(flag[0] == true){
        ui->label->setText("양상추");
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_1.png);");
        flag[0] = false;
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_1.png);");
        flag[0] = true;
    }
}

void vegetable::on_pushButton_2_clicked()
{
    if(flag[1] == true){
        ui->label->setText("토마토");
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_2.png);");
        flag[1] = false;
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_2.png);");
        flag[1] = true;
    }
}

void vegetable::on_pushButton_3_clicked()
{
    if(flag[2] == true){
        ui->label->setText("오이");
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_3.png);");
        flag[2] = false;
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_3.png);");
        flag[2] = true;
    }
}

void vegetable::on_pushButton_4_clicked()
{
    if(flag[3] == true){
        ui->label->setText("피망");
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_4.png);");
        flag[3] = false;
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_4.png);");
        flag[3] = true;
    }
}

void vegetable::on_pushButton_5_clicked()
{
    if(flag[4] == true){
        ui->label->setText("양파");
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_5.png);");
        flag[4] = false;
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_5.png);");
        flag[4] = true;
    }
}

void vegetable::on_pushButton_6_clicked()
{
    if(flag[5] == true){
        ui->label->setText("피클");
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_6.png);");
        flag[5] = false;
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_6.png);");
        flag[5] = true;
    }
}

void vegetable::on_pushButton_7_clicked()
{
    if(flag[6] == true){
        ui->label->setText("올리브");
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_7.png);");
        flag[6] = false;
    } else {
        ui->label->clear();
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_7.png);");
        flag[6] = true;
    }
}

void vegetable::on_pushButton_8_clicked()
{
    if(flag[7] == true){
        ui->label->setText("할라피뇨");
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_8.png);");
        flag[7] = false;
    } else {
        ui->label->clear();
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_8.png);");
        flag[7] = true;
    }
}

void vegetable::on_pushButton_back_clicked()
{
    this->hide();
}
