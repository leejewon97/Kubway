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
