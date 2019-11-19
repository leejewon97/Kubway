#include "cheese.h"
#include "ui_cheese.h"


cheese::cheese(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cheese)
{
    ui->setupUi(this);
    for (int i = 0; i < 3; i++) {
        flag[i] = true;
    }
}

cheese::~cheese()
{
    delete ui;
}

void cheese::on_pushButton_1_clicked()
{
    if(flag[0] == true){
        ui->label->setText("아메리칸 치즈");
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_1.png);");
        flag[0] = false;
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_1.png);");
        flag[0] = true;
    }
}

void cheese::on_pushButton_2_clicked()
{
    if(flag[1] == true){
        ui->label->setText("슈레드 치즈");
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_2.png);");
        flag[1] = false;
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_2.png);");
        flag[1] = true;
    }
}

void cheese::on_pushButton_3_clicked()
{
    if(flag[2] == true){
        ui->label->setText("모짜렐라 치즈");
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_3.png);");
        flag[2] = false;
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_3.png);");
        flag[2] = true;
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
