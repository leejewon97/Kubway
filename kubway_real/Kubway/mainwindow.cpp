#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);


    connect(size, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
}

mainwindow::~mainwindow()
{
    delete ui;
}

QString mainwindow::getString() {
    return str;
}

void mainwindow::setString(QString s) {
    str =s;
}
void mainwindow::on_pushButton_2_clicked()
{
    str.clear();
    str.append("TAKE_OUT \n");
    size->setString(this->getString());
    size->show();
}

void mainwindow::on_pushButton_clicked()
{
    str.clear();
    str.append("RESTAURANT\n");
    size->setString(this->getString());
    size->show();
}

void mainwindow::closeAll()
{

    size->hide();
}

void mainwindow::on_super_btn_clicked()
{
    l.show();
}
