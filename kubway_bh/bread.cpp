#include "bread.h"
#include "ui_bread.h"

bread::bread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bread)
{
    ui->setupUi(this);
}

bread::~bread()
{
    delete ui;
}
