#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_1_clicked()
{
    ui->label->setText("허니오트");
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_1.png);");
}

void Widget::on_pushButton_2_clicked()
{
    ui->label->setText("하티");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_2.png);");
}

void Widget::on_pushButton_3_clicked()
{
    ui->label->setText("위트");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_3.png);");
}

void Widget::on_pushButton_4_clicked()
{
    ui->label->setText("파마산 오레가노");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_4.png);");
}

void Widget::on_pushButton_5_clicked()
{
    ui->label->setText("화이트");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_5.png);");
}

void Widget::on_pushButton_6_clicked()
{
    ui->label->setText("플랫브레드");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_6.png);");
}
