#include "manage_delete.h"
#include "ui_manage_delete.h"

#include <QDebug>

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
    QString name;
    name = ui->name_delete->text();

    char _name[MAX_NAME] = {0,};
    bool del;
    //delete±â´É
    qsnprintf(_name, sizeof(_name), "%s", name.toUtf8().constData());

    mb.read_Node(&mb.head);
    del = mb.delete_Node(&mb.head, _name);
    if(del == false){
        ui->delete_info->setText("no menu");
    } else
        ui->delete_info->clear();
}

void manage_delete::on_pushButton_close_clicked()
{
    ui->name_delete->setText("");
    this->hide();
}
