#include "for_back.h"
#include "ui_for_back.h"

for_back::for_back(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::for_back)
{
    ui->setupUi(this);
}

for_back::~for_back()
{
    delete ui;
}
