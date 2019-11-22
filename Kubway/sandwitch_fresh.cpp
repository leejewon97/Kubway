#include "sandwitch_fresh.h"
#include "ui_sandwitch_fresh.h"

sandwitch_fresh::sandwitch_fresh(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwitch_fresh)
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

void sandwitch_fresh::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwitch_fresh::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}
sandwitch_fresh::~sandwitch_fresh()
{
    delete ui;
}

void sandwitch_fresh::on_pushButton_1_clicked()
{
    if(btnFlag) {
        ui->label->setText("로티세리 바베큐 치킨");
        ui->pushButton_1->setStyleSheet("background-image:  url(:/image/sandwich_page/fresh/click_on/t_1.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url url(:/image/sandwich_page/fresh/click_off/t_1.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_fresh::on_pushButton_2_clicked()
{
    if(btnFlag) {
        ui->label->setText("로스트 치킨");
        ui->pushButton_2->setStyleSheet("background-image:  url(:/image/sandwich_page/fresh/click_on/t_2.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url url(:/image/sandwich_page/fresh/click_off/t_2.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_fresh::on_pushButton_3_clicked()
{
    if(btnFlag) {
        ui->label->setText("로스트 비프");
        ui->pushButton_3->setStyleSheet("background-image:  url(:/image/sandwich_page/fresh/click_on/t_3.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url url(:/image/sandwich_page/fresh/click_off/t_3.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_fresh::on_pushButton_4_clicked()
{
    if(btnFlag) {
        ui->label->setText("서브웨이 클럽");
        ui->pushButton_4->setStyleSheet("background-image:  url(:/image/sandwich_page/fresh/click_on/t_4.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url url(:/image/sandwich_page/fresh/click_off/t_4.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_fresh::on_pushButton_5_clicked()
{
    if(btnFlag) {
        ui->label->setText("터키");
        ui->pushButton_5->setStyleSheet("background-image:  url(:/image/sandwich_page/fresh/click_on/t_5.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url url(:/image/sandwich_page/fresh/click_off/t_5.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_fresh::on_pushButton_6_clicked()
{
    if(btnFlag) {
        ui->label->setText("베지");
        ui->pushButton_6->setStyleSheet("background-image:  url(:/image/sandwich_page/fresh/click_on/t_6.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url url(:/image/sandwich_page/fresh/click_off/t_6.png);;");
        btnFlag = true;
        enableButtons();
    }
}


void sandwitch_fresh::on_pushButton_back_clicked()
{
    this->hide();
}

void sandwitch_fresh::on_pushButton_next_clicked()
{
    b.show();
}
