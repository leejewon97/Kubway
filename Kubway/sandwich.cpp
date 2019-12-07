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

void sandwich::on_classic_btn_clicked()
{
    sc->show();
}

void sandwich::on_fresh_btn_clicked()
{
    sf->show();
}

void sandwich::on_new_btn_clicked()
{
    sn->show();
}

void sandwich::on_premium_btn_clicked()
{
    sp->show();
}

void sandwich::on_pushButton_back_clicked()
{
    this->hide();
}

void sandwich::on_pushButton_home_clicked()
{
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
