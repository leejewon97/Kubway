#include "bread.h"
#include "ui_bread.h"

bread::bread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bread)
{
    flag = true;
    ui->setupUi(this);
}

bread::~bread()
{
    delete ui;
}

void bread::on_pushButton_1_clicked()
{

    ui->label->setText("허니오트");
    if(flag == true){
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_1.png);");
        flag = false;
    } else {
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_1.png);");
        flag = true;
    }
}

void bread::on_pushButton_2_clicked()
{
    ui->label->setText("하티");
    if(flag == true){
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_2.png);");
        flag = false;
    } else {
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_2.png);");
        flag = true;
    }
}

void bread::on_pushButton_3_clicked()
{
    ui->label->setText("위트");
    if(flag == true){
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_3.png);");
        flag = false;
    } else {
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_3.png);");
        flag = true;
    }
}

void bread::on_pushButton_4_clicked()
{
    ui->label->setText("파마산 오레가노");
    if(flag == true){
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_4.png);");
        flag = false;
    } else {
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_4.png);");
        flag = true;
    }
}

void bread::on_pushButton_5_clicked()
{
    ui->label->setText("화이트");
    if(flag == true){
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_5.png);");
        flag = false;
    } else {
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_5.png);");
        flag = true;
    }
}

void bread::on_pushButton_6_clicked()
{
    ui->label->setText("플랫브레드");
    if(flag == true){
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_6.png);");
        flag = false;
    } else {
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_6.png);");
        flag = true;
    }
}

void bread::on_pushButton_next_clicked()
{
    c.show();
}

void bread::on_pushButton_back_clicked()
{
    this->hide();
}
