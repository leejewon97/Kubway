#include "sandwich_premium.h"
#include "ui_sandwich_premium.h"

sandwich_premium::sandwich_premium(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwich_premium)
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

sandwich_premium::~sandwich_premium()
{
    delete ui;
}

void sandwich_premium::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwich_premium::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}

void sandwich_premium::on_pushButton_1_clicked()
{
    if(btnFlag) {
        ui->label->setText("쉬림프");
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_2_clicked()
{
    if(btnFlag) {
        ui->label->setText("쉬림프 아보카도");
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_3_clicked()
{
    if(btnFlag) {
        ui->label->setText("스테이크 & 치즈");
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_4_clicked()
{
    if(btnFlag) {
        ui->label->setText("터키 베이컨 아보카도");
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_5_clicked()
{
    if(btnFlag) {
        ui->label->setText("치킨 베이컨 랜치");
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_6_clicked()
{
    if(btnFlag) {
        ui->label->setText("써브웨이 멜트");
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_next_clicked()
{
    b.show();
}

void sandwich_premium::on_pushButton_back_clicked()
{
    this->hide();
}
