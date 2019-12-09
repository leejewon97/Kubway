#include "card_or_cash.h"
#include "ui_card_or_cash.h"
#include <QPushButton>
#include <QtDebug>

card_or_cash::card_or_cash(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::card_or_cash)
{
    ui->setupUi(this);

    connect(p, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
}

card_or_cash::~card_or_cash()
{
    delete ui;
}
void card_or_cash::setString(QString s) {
    str = s;
}

QString card_or_cash::getString() {
    return str;
}
void card_or_cash::on_card_btn_clicked()
{

}

void card_or_cash::on_cash_btn_clicked()
{
    p->setString(getString());
    p->show();
}

void card_or_cash::closeAll()
{
    p->hide();
    on_pushButton_home_clicked();
}

void card_or_cash::on_pushButton_home_clicked()
{
    emit buttonPressed();
}

void card_or_cash::on_pushButton_back_clicked()
{
    this->hide();
}
