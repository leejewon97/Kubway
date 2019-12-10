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
    QStringList tmp = str.split("원"); //원 으로 스트링 쪼갬
    QString sandwich_price = tmp[0].right(6);
    QString topping_price = tmp[1].right(5);

    price = sandwich_price.toInt() + topping_price.toInt() + 1900;
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

        QString out = QString::number(outPrice);
        QString in = QString::number(inPrice);
        QString pri = QString::number(price);


        str.append("\n세트 1900원");
        str.append("\n\n받은 돈 : "+in+" 원");
        str.append("\n가격 : "+pri+" 원");
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
