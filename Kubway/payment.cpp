#include "payment.h"
#include "ui_payment.h"

payment::payment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::payment)
{
    ui->setupUi(this);
    connect(r, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
}

payment::~payment()
{
    delete ui;
}

void payment::on_pushButton_next_clicked()
{
    r->show();
}

void payment::closeAll()
{
    r->hide();
    on_pushButton_home_clicked();
}

void payment::on_pushButton_home_clicked()
{
    emit buttonPressed();
}
