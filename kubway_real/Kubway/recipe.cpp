#include "recipe.h"
#include "ui_recipe.h"
#include <QFile>
#include <QDebug>

recipe::recipe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recipe)
{
    connect(od, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
    ui->setupUi(this);

    QDateTime local(QDateTime::currentDateTime());
    time = local.toString("yyyy-MM-dd  HH:mm:ss");

    ui->label_datetime->setText(time);
}

recipe::~recipe()
{
    delete ui;
}

void recipe::setPrice(int price){
    this->price = price;
}
void recipe::setUi(QString s) {
    ui->label_inform->setText(s);
}

void recipe::setString(QString s) {
    str = s;
}

void recipe::closeAll()
{
    od->hide();
    emit buttonPressed();
}

void recipe::on_pushButton_next_clicked()
{
    QString  fileName = QApplication::applicationDirPath() + "/recipe.txt";
    QFile file(fileName);
    file.open(QIODevice::ReadWrite | QIODevice::Append);
    QTextStream stream(&file);

    stream << time + "\n" + str + "\n" + price + "원\n----------------------------\n";

    od->show();
}

void recipe::on_pushButton_next_2_clicked()
{
    on_pushButton_next_clicked();
}
