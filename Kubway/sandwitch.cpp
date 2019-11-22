#include "sandwitch.h"
#include "ui_sandwitch.h"

sandwitch::sandwitch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwitch)
{
    ui->setupUi(this);
}

sandwitch::~sandwitch()
{
    delete ui;
}
