#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

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

void Widget::on_btnDineIn_clicked()
{
    QMessageBox::information(this,"어디서","그래 매장에서 먹어");
}

void Widget::on_btnTakeOut_clicked()
{
    QMessageBox::information(this,"어디서","그래 가져가서 먹어");
}

void Widget::on_btnKorean_clicked()
{
    QMessageBox::information(this,"언어","한국어로 주문합니다");
}

void Widget::on_btnEnglish_clicked()
{
    QMessageBox::information(this,"language","Order in English");
}
