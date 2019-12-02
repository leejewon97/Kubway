#include "side_select.h"
#include "ui_side_select.h"

side_select::side_select(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::side_select)
{
    ui->setupUi(this);
}

side_select::~side_select()
{
    delete ui;
}
