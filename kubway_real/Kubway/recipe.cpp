#include "recipe.h"
#include "ui_recipe.h"

recipe::recipe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recipe)
{
    ui->setupUi(this);

    connect(od, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
}

recipe::~recipe()
{
    delete ui;
}

void recipe::on_pushButton_clicked()
{
    od->show();
}

void recipe::closeAll()
{
    od->hide();
    on_pushButton_home_clicked();
}

void recipe::on_pushButton_home_clicked()
{
    emit buttonPressed();
}
