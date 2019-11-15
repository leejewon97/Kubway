#include "cheese.h"
#include "ui_cheese.h"

cheese::cheese(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cheese)
{
    ui->setupUi(this);
}

cheese::~cheese()
{
    delete ui;
}
