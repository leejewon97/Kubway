#include "cheese.h"
#include "ui_cheese.h"


cheese::cheese(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cheese)
{
    ui->setupUi(this);
    flag =true;
}

cheese::~cheese()
{
    delete ui;
}

void cheese::on_pushButton_1_clicked()
{
    ui->label->setText("아메리칸 치즈");
    if(flag == true){
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_1.png);");
        flag = false;
    } else {
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_1.png);");
        flag = true;
    }
}

void cheese::on_pushButton_2_clicked()
{
    ui->label->setText("슈레드 치즈");
    if(flag == true){
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_2.png);");
        flag = false;
    } else {
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_2.png);");
        flag = true;
    }
}

void cheese::on_pushButton_3_clicked()
{
    ui->label->setText("모짜렐라 치즈");
    if(flag == true){
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_3.png);");
        flag = false;
    } else {
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_3.png);");
        flag = true;
    }
}

void cheese::on_pushButton_next_clicked()
{
    t.show();
}

void cheese::on_pushButton_back_clicked()
{
    this->hide();
}
