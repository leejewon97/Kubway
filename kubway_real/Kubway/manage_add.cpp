#include "manage_add.h"
#include "ui_manage_add.h"

#include <QDebug>

manage_add::manage_add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manage_add)
{
    ui->setupUi(this);
}

manage_add::~manage_add()
{
    delete ui;
}

void manage_add::on_pushButton_add_clicked()
{

}

void manage_add::on_pushButton_close_clicked()
{

}
