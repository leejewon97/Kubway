#include "topping.h"
#include "ui_topping.h"

topping::topping(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topping)
{
    ui->setupUi(this);
}

topping::~topping()
{
    delete ui;
}
