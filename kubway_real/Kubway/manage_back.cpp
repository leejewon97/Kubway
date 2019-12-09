#include "manage_back.h"
#include "ui_manage_back.h"

manage_back::manage_back(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manage_back)
{
}

manage_back::~manage_back()
{
    delete ui;
}
