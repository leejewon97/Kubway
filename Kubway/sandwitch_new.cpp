#include "sandwitch_new.h"
#include "ui_sandwitch_new.h"

sandwitch_new::sandwitch_new(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwitch_new)
{
    ui->label->clear();
    btnFlag = true;

    buttons[0] = ui->pushButton_1;
    buttons[1] = ui->pushButton_2;
    buttons[2] = ui->pushButton_3;
    buttons[3] = ui->pushButton_4;
    buttons[4] = ui->pushButton_5;
    buttons[5] = ui->pushButton_6;
    ui->setupUi(this);
}

void sandwitch_new::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwitch_new::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}
sandwitch_new::~sandwitch_new()
{
    delete ui;
}

void sandwitch_new::on_pushButton_1_clicked()
{
    if(btnFlag) {
        ui->label->setText("스테이크&치즈아보카도 랩");
        ui->pushButton_1->setStyleSheet("background-image:  url(:/image/sandwich_page/new/click_on/t_1.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url url(:/image/sandwich_page/new/click_off/t_1.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_new::on_pushButton_2_clicked()
{
    if(btnFlag) {
        ui->label->setText("쉬림프 에그마요 랩");
        ui->pushButton_2->setStyleSheet("background-image:  url(:/image/sandwich_page/new/click_on/t_2.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url url(:/image/sandwich_page/new/click_off/t_2.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_new::on_pushButton_3_clicked()
{
    if(btnFlag) {
        ui->label->setText("치킨 베이컨 미니 랩");
        ui->pushButton_3->setStyleSheet("background-image:  url(:/image/sandwich_page/new/click_on/t_3.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url url(:/image/sandwich_page/new/click_off/t_3.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_new::on_pushButton_4_clicked()
{
    if(btnFlag) {
        ui->label->setText("베이컨 웨지 미니 랩");
        ui->pushButton_4->setStyleSheet("background-image:  url(:/image/sandwich_page/new/click_on/t_4.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url url(:/image/sandwich_page/new/click_off/t_4.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_new::on_pushButton_5_clicked()
{
    if(btnFlag) {
        ui->label->setText("쉬림프");
        ui->pushButton_5->setStyleSheet("background-image:  url(:/image/sandwich_page/new/click_on/t_5.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url url(:/image/sandwich_page/new/click_off/t_5.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_new::on_pushButton_6_clicked()
{
    if(btnFlag) {
        ui->label->setText("쉬림프 아보카도");
        ui->pushButton_6->setStyleSheet("background-image:  url(:/image/sandwich_page/new/click_on/t_6.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url url(:/image/sandwich_page/new/click_off/t_6.png);;");
        btnFlag = true;
        enableButtons();
    }
}


void sandwitch_new::on_pushButton_back_clicked()
{
    this->hide();
}

void sandwitch_new::on_pushButton_next_clicked()
{
    b.show();
}
