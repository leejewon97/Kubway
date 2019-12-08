#include "sandwich.h"
#include "ui_sandwich.h"

sandwich::sandwich(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwich)
{
    ui->setupUi(this);


    connect(sn, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
    connect(sc, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
    connect(sf, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
    connect(sp, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
}

sandwich::~sandwich()
{
    delete ui;
}
void sandwich::setString(QString s) {
    str = s;
}

QString sandwich::getString() {
    return str;
}

void sandwich::on_classic_btn_clicked()
{
    sc->setString(this->getString());
    sc->setStringLength(str.length());
    sc->show();
}

void sandwich::on_fresh_btn_clicked()
{
    sf->setString(this->getString());
    sf->setStringLength(str.length());
    sf->show();
}

void sandwich::on_new_btn_clicked()
{
    sn->setString(this->getString());
    sn->setStringLength(str.length());
    sn->show();
}

void sandwich::on_premium_btn_clicked()
{
    sp->setString(this->getString());
    sp->setStringLength(str.length());
    sp->show();
}

void sandwich::on_pushButton_back_clicked()
{
    str.clear();
    this->hide();
}

void sandwich::on_pushButton_home_clicked()
{
    str.clear();
    emit buttonPressed();
}

void sandwich::closeAll()
{
    sn->hide();
    sc->hide();
    sf->hide();
    sp->hide();
    on_pushButton_home_clicked();
}
