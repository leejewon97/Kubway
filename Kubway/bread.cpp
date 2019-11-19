#include "bread.h"
#include "ui_bread.h"

bread::bread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bread)
{
    ui->setupUi(this);
    for (int i = 0; i < 6; i++) {
        flag[i] = true;
    }
}

bread::~bread()
{
    delete ui;
}

void bread::on_pushButton_1_clicked()
{
    if(flag[0] == true){
        ui->label->setText("허니오트");
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_1.png);");
        flag[0] = false;
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_1.png);");
        flag[0] = true;
    }
}

void bread::on_pushButton_2_clicked()
{
    if(flag[1] == true){
        ui->label->setText("하티");
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_2.png);");
        flag[1] = false;
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_2.png);");
        flag[1] = true;
    }
}

void bread::on_pushButton_3_clicked()
{
    if(flag[2] == true){
        ui->label->setText("위트");
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_3.png);");
        flag[2] = false;
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_3.png);");
        flag[2] = true;
    }
}

void bread::on_pushButton_4_clicked()
{
    if(flag[3] == true){
        ui->label->setText("파마산 오레가노");
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_4.png);");
        flag[3] = false;
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_4.png);");
        flag[3] = true;
    }
}

void bread::on_pushButton_5_clicked()
{
    if(flag[4] == true){
        ui->label->setText("화이트");
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_5.png);");
        flag[4] = false;
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_5.png);");
        flag[4] = true;
    }
}

void bread::on_pushButton_6_clicked()
{
    if(flag[5] == true){
        ui->label->setText("플랫브레드");
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_6.png);");
        flag[5] = false;
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_6.png);");
        flag[5] = true;
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
