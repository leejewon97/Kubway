#include "manage_delete.h"
#include "ui_manage_delete.h"

manage_delete::manage_delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manage_delete)
{
    ui->setupUi(this);
}

manage_delete::~manage_delete()
{
    delete ui;
}

void manage_delete::on_pushButton_delete_clicked()
{

}

void manage_delete::on_pushButton_close_clicked()
{

}
