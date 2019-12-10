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

int payment::calcPrice(int inPrice){
    int temp = inPrice - price;
    if(temp >= 0){
        qDebug() << price;
        return temp;
    } else {
       qDebug() << "처리안함";
       return -1;
    }
}

void payment::on_pushButton_next_clicked()
{
    inPrice = ui->textEdit->toPlainText().toInt();
    outPrice = calcPrice(inPrice);
    if(price != -1){
        r->setPrice(outPrice);
        r->setString(getString());
        r->show();
        r->setUi(getString());
        qDebug() << getString();
    }
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
