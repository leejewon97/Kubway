#include "recipe.h"
#include "ui_recipe.h"

recipe::recipe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recipe)
{
    ui->setupUi(this);
}

recipe::~recipe()
{
    delete ui;
}

void recipe::on_pushButton_clicked()
{
    od.show();
}
