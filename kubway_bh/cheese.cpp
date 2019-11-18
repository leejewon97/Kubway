#include "cheese.h"
#include "bread.h"
#include "ui_cheese.h"

cheese::cheese(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cheese)
{
    ui->setupUi(this);
    ui->pushButton_10->show();
}

cheese::~cheese()
{
    delete ui;
}

void cheese::on_pushButton_10_clicked()
{
    b.show();
    hide();
}
