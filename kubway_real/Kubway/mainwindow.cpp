#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);


    connect(s, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_pushButton_2_clicked()
{
    s->show();
}

void mainwindow::on_pushButton_clicked()
{

    s->show();
}

void mainwindow::closeAll()
{

    s->hide();
}

void mainwindow::on_super_btn_clicked()
{
    l.show();
}
