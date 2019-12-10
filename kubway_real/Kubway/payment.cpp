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
    qDebug() << "in : " << inPrice;
    outPrice = calcPrice(inPrice);
    qDebug() << "out : " << outPrice;
    if(outPrice != -1){
        r->setPrice(outPrice);



        QString pri =QString::number(price);
        QString out =QString::number(outPrice);
        QString in =QString::number(inPrice);

        str.append("\n\n금액 : "+pri+" 원\n");
        str.append("\n받은 돈 : "+in+" 원");
        str.append("\n거스름 돈 : "+out+" 원");

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
