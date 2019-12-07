#include "card_or_cash.h"
#include "ui_card_or_cash.h"
#include "payment.h"
#include <QPushButton>

card_or_cash::card_or_cash(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::card_or_cash)
{
    ui->setupUi(this);
}

card_or_cash::~card_or_cash()
{
    delete ui;
}

void card_or_cash::on_card_btn_clicked()
{

}

void card_or_cash::on_cash_btn_clicked()
{
    p.show();
}
