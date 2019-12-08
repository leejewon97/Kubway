#include "recipe.h"
#include "ui_recipe.h"

recipe::recipe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recipe)
{
    connect(od, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
    ui->setupUi(this);

    QString time;
    QDateTime local(QDateTime::currentDateTime());
    time = local.toString("yyyy-MM-dd  HH:mm:ss");

    ui->label_datetime->setText(time);
    ui->label_inform->setText("test");
}

recipe::~recipe()
{
    delete ui;
}

void recipe::on_pushButton_next_clicked()
{
    od->show();
}


void recipe::closeAll()
{
    od->hide();
    emit buttonPressed();
}


