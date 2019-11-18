#include "vegetable.h"
#include "ui_vegetable.h"

vegetable::vegetable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vegetable)
{
    ui->setupUi(this);
}

vegetable::~vegetable()
{
    delete ui;
}
