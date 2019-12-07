#include "payment.h"
#include "ui_payment.h"

payment::payment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::payment)
{
    ui->setupUi(this);
}

payment::~payment()
{
    delete ui;
}

void payment::on_pushButton_next_clicked()
{
    r.show();
}
