#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bread.h"

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_pushButton_2_clicked()
{
    b.show();
}

void mainwindow::on_pushButton_clicked()
{
    b.show();
}
