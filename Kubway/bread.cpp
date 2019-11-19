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
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_2.png);");
}

void bread::on_pushButton_3_clicked()
{
    ui->label->setText("위트");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_3.png);");
}

void bread::on_pushButton_4_clicked()
{
    ui->label->setText("파마산 오레가노");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_4.png);");
}

void bread::on_pushButton_5_clicked()
{
    ui->label->setText("화이트");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_5.png);");
}

void bread::on_pushButton_6_clicked()
{
    ui->label->setText("플랫브레드");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_6.png);");
}

void bread::on_pushButton_next_clicked()
{
    c.show();
}

void bread::on_pushButton_back_clicked()
{
    this->hide();
}
