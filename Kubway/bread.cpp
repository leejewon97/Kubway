#include "bread.h"
#include "ui_bread.h"

bread::bread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bread)
{
    ui->setupUi(this);
    ui->label->clear();
    btnFlag = true;
    buttons[0] = ui->pushButton_1;
    buttons[1] = ui->pushButton_2;
    buttons[2] = ui->pushButton_3;
    buttons[3] = ui->pushButton_4;
    buttons[4] = ui->pushButton_5;
    buttons[5] = ui->pushButton_6;
}

bread::~bread()
{
    delete ui;
}
void bread::setString(QString s) {
    str = s;
}
QString bread::getString() {
    return str;
}
void bread::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void bread::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}

void bread::on_pushButton_1_clicked()
{
    if(btnFlag) {
        str.append("허니오트\n");
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(5);
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_1.png);");
        btnFlag = true;
        enableButtons();
    }

}

void bread::on_pushButton_2_clicked()
{
    if(btnFlag){
        str.append("하티\n");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(3);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_2.png);");
        btnFlag = true;
        enableButtons();
    }

}

void bread::on_pushButton_3_clicked()
{
    if(btnFlag){
        str.append("위트\n");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(3);
       ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_3.png);");
        btnFlag = true;
        enableButtons();
    }

}

void bread::on_pushButton_4_clicked()
{
    if(btnFlag){
        str.append("파마산 오레가노\n");
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        str.chop(9);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_4.png);");
        btnFlag = true;
        enableButtons();
    }

}

void bread::on_pushButton_5_clicked()
{
    if(btnFlag){
        str.append("화이트\n");
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(4);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_5.png);");
        btnFlag = true;
        enableButtons();
    }

}

void bread::on_pushButton_6_clicked()
{
    if(btnFlag){
        str.append("플렛브레드\n");

        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_on/bread_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(6);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/bread_page/click_off/bread_6.png);");
        btnFlag = true;
        enableButtons();
    }

}

void bread::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
        c.setString(getString());
        c.show();
    }
}

void bread::on_pushButton_back_clicked()
{
    this->hide();
}
