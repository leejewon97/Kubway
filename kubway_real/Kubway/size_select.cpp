#include "size_select.h"
#include "ui_size_select.h"

size_select::size_select(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::size_select)
{
    ui->setupUi(this);

    connect(s, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
}

size_select::~size_select()
{
    delete ui;
}

void size_select::setString(QString s) {
    str = s;
}
QString size_select::getString() {
    return this->str;
}

void size_select::on_pushButton_15cm_2_clicked()
{
    str.append("15cm\n");
    s->setString(getString());
    s->show();
}

void size_select::on_pushButton_30cm_2_clicked()
{
    str.append("30cm\n");
    s->setString(getString());
    s->show();
}

void size_select::on_pushButton_back_2_clicked()
{
    str.remove(11, 50);
    this->hide();
}

void size_select::on_pushButton_home_2_clicked()
{
    str.clear();
    emit buttonPressed();
}

void size_select::closeAll()
{
    s->hide();
    on_pushButton_home_2_clicked();
}
