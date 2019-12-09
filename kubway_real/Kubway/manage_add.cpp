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

    char _name[MAX_NAME] = {0,};
    char _rcsauce1[MAX_NAME] = {0,};
    char _rcsauce2[MAX_NAME] = {0,};

    //add기능
    qsnprintf(_name, sizeof(_name), "%s", name.toUtf8().constData());
    qsnprintf(_rcsauce1, sizeof(_name), "%s", rcsauce1.toUtf8().constData());
    qsnprintf(_rcsauce2, sizeof(_name), "%s", rcsauce2.toUtf8().constData());


    mb.read_Node(&mb.head);
    //bool bol = mb.find_Node(mb.head, "egg1");
    mb.make_Node(&mb.head,price15.toInt(), price30.toInt(), _name, _rcsauce1,_rcsauce2);
    mb.save_Node(&mb.head, 1);

    name.append("\n\n15cm 원" + price15+"\n30cm 원"+price30);

    make_button1(name);


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

void manage_add::make_button1(QString send_list)
{
    sn.set_btn(send_list);
}
