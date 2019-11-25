#include "sandwich.h"
#include "ui_sandwich.h"

sandwich::sandwich(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwich)
{
    ui->setupUi(this);
}

sandwich::~sandwich()
{
    delete ui;
}

void sandwich::on_pushButton_clicked()
{
    sc.show();
}
