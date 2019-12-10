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
    this->inPrice = price;
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

void recipe::calcPrice(int inPrice){
    int temp = inPrice - price;
    if(temp){
        outPrice = temp;
        qDebug() << outPrice;
    } else {
       qDebug() << "처리안함";
       QString err = "ERROR";
       outPrice = err.toInt();
    }
}

void recipe::on_pushButton_next_clicked()
{
    QString  fileName = QApplication::applicationDirPath() + "/recipe.txt";
    QFile file(fileName);
    file.open(QIODevice::ReadWrite | QIODevice::Append);
    QTextStream stream(&file);

    calcPrice(inPrice);
    QString out = ""+outPrice;
    qDebug() << outPrice;
    stream << time + "\n" + str + "\n" + out + "원\n----------------------------\n";
    qDebug() << str;

    od->show();
}

void recipe::on_pushButton_next_2_clicked()
{
    on_pushButton_next_clicked();
}
