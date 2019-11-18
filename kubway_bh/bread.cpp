#include "bread.h"
#include "cheese.h"
#include "mainwindow.h"
#include "ui_bread.h"

bread::bread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bread)
{
    ui->setupUi(this);
}

bread::~bread()
{
    delete ui;
}

void bread::on_pushButton_9_clicked()
{
}

void bread::on_pushButton_10_clicked()
{
}
