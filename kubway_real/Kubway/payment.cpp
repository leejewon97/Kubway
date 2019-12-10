#include "payment.h"
#include "ui_payment.h"
#include <QDebug>

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

QString payment::getString() {
    return str;
}
void payment::setString(QString s) {
    str = s;
}
void payment::on_pushButton_next_clicked()
{
    price = ui->textEdit->toPlainText().toInt();

    r->setPrice(price);
    r->setString(getString());
    r->show();
    r->setUi(getString());
    qDebug() << getString();
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

void payment::on_pushButton_back_clicked()
{
    this->hide();
}
