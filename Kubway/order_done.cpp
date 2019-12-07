#include "order_done.h"
#include "ui_order_done.h"

order_done::order_done(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::order_done)
{
    ui->setupUi(this);
}

order_done::~order_done()
{
    delete ui;
}
