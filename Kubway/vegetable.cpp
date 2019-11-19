#include "vegetable.h"
#include "ui_vegetable.h"

vegetable::vegetable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vegetable)
{
    ui->setupUi(this);
}

vegetable::~vegetable()
{
    delete ui;
}

void vegetable::on_pushButton_1_clicked()
{
    ui->label->setText("양상추");
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_1.png);");
}

void vegetable::on_pushButton_2_clicked()
{
    ui->label->setText("토마토");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_2.png);");
}

void vegetable::on_pushButton_3_clicked()
{
    ui->label->setText("오이");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_3.png);");
}

void vegetable::on_pushButton_4_clicked()
{
    ui->label->setText("피망");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_4.png);");
}

void vegetable::on_pushButton_5_clicked()
{
    ui->label->setText("양파");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_5.png);");
}

void vegetable::on_pushButton_6_clicked()
{
    ui->label->setText("피클");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_6.png);");
}

void vegetable::on_pushButton_7_clicked()
{
    ui->label->setText("올리브");
    ui->pushButton_7->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_7.png);");
}

void vegetable::on_pushButton_8_clicked()
{
    ui->label->setText("할라피뇨");
    ui->pushButton_8->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_8.png);");
}

void vegetable::on_pushButton_back_clicked()
{
    this->hide();
}
