#include "cheese.h"
#include "ui_cheese.h"

cheese::cheese(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cheese)
{
    ui->setupUi(this);
}

cheese::~cheese()
{
    delete ui;
}

void cheese::on_pushButton_1_clicked()
{
    ui->label->setText("아메리칸 치즈");
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_1.png);");
}

void cheese::on_pushButton_2_clicked()
{
    ui->label->setText("슈레드 치즈");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_2.png);");
}

void cheese::on_pushButton_3_clicked()
{
    ui->label->setText("모짜렐라 치즈");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_3.png);");
}
