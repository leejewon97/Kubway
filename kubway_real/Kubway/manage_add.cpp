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
    QString name;
    QString price15;
    QString price30;
    QString rcsauce1;
    QString rcsauce2;

    name = ui->name_add->text();
    price15 = ui->size15_price_add->text();
    price30 = ui->size30_price_add->text();
    rcsauce1 = ui->rcsauce1_add->text();
    rcsauce2 = ui->rcsauce2_add->text();

    //add±â´É


    mb.read_Node(&mb.head);
    bool bol = mb.find_Node(mb.head, "egg1");

    qDebug() << bol;
    ui->name_add->setText("");
    ui->size15_price_add->setText("");
    ui->size30_price_add->setText("");
    ui->rcsauce1_add->setText("");
    ui->rcsauce2_add->setText("");


}

void manage_add::on_pushButton_close_clicked()
{
    ui->name_add->setText("");
    ui->size15_price_add->setText("");
    ui->size30_price_add->setText("");
    ui->rcsauce1_add->setText("");
    ui->rcsauce2_add->setText("");
    this->hide();
}
