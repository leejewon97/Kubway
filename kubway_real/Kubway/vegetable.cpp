#include "vegetable.h"
#include "ui_vegetable.h"

vegetable::vegetable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vegetable)
{
    ui->setupUi(this);
    ui->label->clear();

    connect(sa, SIGNAL(buttonPressed()), this, SLOT(closeAll()));
    for (int i = 0; i < 8; i++) {
        btnFlag[i] = true;
    }
    on_pushButton_1_clicked();
    on_pushButton_2_clicked();
    on_pushButton_3_clicked();
    on_pushButton_4_clicked();
    on_pushButton_5_clicked();
}

vegetable::~vegetable()
{
    delete ui;
}

void vegetable::setString(QString s) {
    str = s;
}
QString vegetable::getString() {
    return str;
}

void vegetable::on_pushButton_1_clicked()
{
    if(btnFlag[0]){
        str.append("양상추 ");
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_1.png);");
        btnFlag[0] = false;
    } else {
        int index = str.indexOf("양상추 ");
        str.remove(index,4);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_1.png);");
        btnFlag[0] = true;
    }

}

void vegetable::on_pushButton_2_clicked()
{
    if(btnFlag[1]){
        str.append("토마토 ");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_2.png);");
        btnFlag[1] = false;
    } else {
        int index = str.indexOf("토마토 ");
        str.remove(index,4);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_2.png);");
        btnFlag[1] = true;
    }

}

void vegetable::on_pushButton_3_clicked()
{
    if(btnFlag[2]){
        str.append("오이 ");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_3.png);");
        btnFlag[2] = false;
    } else {
        int index = str.indexOf("오이 ");
        str.remove(index,3);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_3.png);");
        btnFlag[2] = true;
    }

}

void vegetable::on_pushButton_4_clicked()
{
    if(btnFlag[3]){
        str.append("피망 ");
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_4.png);");
        btnFlag[3] = false;
    } else {
        int index = str.indexOf("피망 ");
        str.remove(index,3);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_4.png);");
        btnFlag[3] = true;
    }

}

void vegetable::on_pushButton_5_clicked()
{
    if(btnFlag[4]){
        str.append("양파 ");
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_5.png);");
        btnFlag[4] = false;
    } else {
        int index = str.indexOf("양파 ");
        str.remove(index,3);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_5.png);");
        btnFlag[4] = true;
    }

}

void vegetable::on_pushButton_6_clicked()
{
    if(btnFlag[5]){
        str.append("피클 ");
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_6.png);");
        btnFlag[5] = false;
    } else {
        int index = str.indexOf("피클 ");
        str.remove(index,3);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_6.png);");
        btnFlag[5] = true;
    }

}

void vegetable::on_pushButton_7_clicked()
{
    if(btnFlag[6]){
        str.append("올리브 ");
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_7.png);");
        btnFlag[6] = false;
    } else {
        int index = str.indexOf("올리브 ");
        str.remove(index,4);
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_7.png);");
        btnFlag[6] = true;
    }

}

void vegetable::on_pushButton_8_clicked()
{
    if(btnFlag[7]){
        str.append("할라피뇨 ");
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/vegetable_page/click_on/t_8.png);");
        btnFlag[7] = false;
    } else {
        int index = str.indexOf("할라피뇨 ");
        str.remove(index,4);
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/vegetable_page/click_off/t_8.png);");
        btnFlag[7] = true;
    }

}

void vegetable::on_pushButton_back_clicked()
{
    this->hide();
}

void vegetable::on_pushButton_next_clicked()
{
    bool flag = true;
    for (int i = 0; i < 8; i++) {
        flag = flag && btnFlag[i];
    }
    if( !flag ){
        sa->setString(getString() +'\n');
        sa->show();
    }

}

void vegetable::closeAll()
{
    sa->hide();
    on_pushButton_home_clicked();
}

void vegetable::on_pushButton_home_clicked()
{
    emit buttonPressed();
}
