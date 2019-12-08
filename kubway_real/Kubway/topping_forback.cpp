#include "topping_forback.h"
#include "ui_topping_forback.h"

topping_forback::topping_forback(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topping_forback)
{
    ui->setupUi(this);
}

topping_forback::~topping_forback()
{
    delete ui;
}
