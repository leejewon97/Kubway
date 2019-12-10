#include "manage.h"
#include "ui_manage.h"


manage::manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manage)
{
    ui->setupUi(this);
}

manage::~manage()
{
    delete ui;
}

void manage::on_pushButton_back_clicked()
{
    this->hide();
}

void manage::on_pushButton_add_clicked()
{
    ad->show();
}

void manage::on_pushButton_delete_clicked()
{
    dl->show();
}

void manage::on_pushButton_clicked()
{
    ac.text_set();
    ac.show();

}
