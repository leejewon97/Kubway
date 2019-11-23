#include "sandwitch_premium.h"
#include "ui_sandwitch_premium.h"

sandwitch_premium::sandwitch_premium(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwitch_premium)
{
    ui->label->clear();
    btnFlag = true;

    buttons[0] = ui->pushButton_1;
    buttons[1] = ui->pushButton_2;
    buttons[2] = ui->pushButton_3;
    buttons[3] = ui->pushButton_4;
    buttons[4] = ui->pushButton_5;
    buttons[5] = ui->pushButton_6;
    buttons[6] = ui->pushButton_7;
    buttons[7] = ui->pushButton_8;
    buttons[8] = ui->pushButton_9;
    buttons[9] = ui->pushButton_10;
    ui->setupUi(this);
}

void sandwitch_premium::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 9; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwitch_premium::enableButtons(){
    for (int i = 0; i < 9; i++) {
        buttons[i]->setEnabled(true);
    }
}
sandwitch_premium::~sandwitch_premium()
{
    delete ui;
}

void sandwitch_premium::on_pushButton_1_clicked()
{
    if(btnFlag) {
        ui->label->setText("쉬림프");
        ui->pushButton_1->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_1.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_1.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_premium::on_pushButton_2_clicked()
{
    if(btnFlag) {
        ui->label->setText("쉬림프 아보카도");
        ui->pushButton_2->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_2.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_2.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_premium::on_pushButton_3_clicked()
{
    if(btnFlag) {
        ui->label->setText("스테이크&치즈");
        ui->pushButton_3->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_3.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_3.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_premium::on_pushButton_4_clicked()
{
    if(btnFlag) {
        ui->label->setText("치킨 베이컨 런치");
        ui->pushButton_4->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_4.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_4.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_premium::on_pushButton_5_clicked()
{
    if(btnFlag) {
        ui->label->setText("써브웨이 멜트");
        ui->pushButton_5->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_5.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_5.png);;");
        btnFlag = true;
        enableButtons();
    }
}

void sandwitch_premium::on_pushButton_6_clicked()
{
    if(btnFlag) {
        ui->label->setText("터키 베이컨 아보카도");
        ui->pushButton_6->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_6.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_6.png);;");
        btnFlag = true;
        enableButtons();
    }
}
void sandwitch_premium::on_pushButton_7_clicked()
{
    if(btnFlag) {
        ui->label->setText("터키 베이컨");
        ui->pushButton_7->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_7.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_7);
    } else {
        ui->label->clear();
        ui->pushButton_7->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_7.png);;");
        btnFlag = true;
        enableButtons();
    }

}

void sandwitch_premium::on_pushButton_8_clicked()
{
    if(btnFlag) {
        ui->label->setText("스파이시 이탈리안");
        ui->pushButton_8->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_8.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_8);
    } else {
        ui->label->clear();
        ui->pushButton_8->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_8.png);;");
        btnFlag = true;
        enableButtons();
    }

}

void sandwitch_premium::on_pushButton_9_clicked()
{
    if(btnFlag) {
        ui->label->setText("치킨 데리야끼");
        ui->pushButton_9->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_9.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_9);
    } else {
        ui->label->clear();
        ui->pushButton_9->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_9.png);;");
        btnFlag = true;
        enableButtons();
    }

}

void sandwitch_premium::on_pushButton_10_clicked()
{
    if(btnFlag) {
        ui->label->setText("풀드포크");
        ui->pushButton_10->setStyleSheet("background-image:  url(:/image/sandwich_page/premium/click_on/t_10.png);;");
        btnFlag = false;
        disableButtons(ui->pushButton_10);
    } else {
        ui->label->clear();
        ui->pushButton_10->setStyleSheet("background-image: url url(:/image/sandwich_page/premium/click_off/t_10.png);;");
        btnFlag = true;
        enableButtons();
    }

}


void sandwitch_premium::on_pushButton_back_clicked()
{
    this->hide();
}

void sandwitch_premium::on_pushButton_next_clicked()
{
    b.show();
}

