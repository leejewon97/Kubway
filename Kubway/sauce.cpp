#include "sauce.h"
#include "ui_sauce.h"

sauce::sauce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sauce)
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
    buttons[6] = ui->pushButton_7;
    buttons[7] = ui->pushButton_8;
    buttons[8] = ui->pushButton_9;
    buttons[9] = ui->pushButton_10;
    buttons[10] = ui->pushButton_11;
    buttons[11] = ui->pushButton_12;
    buttons[12] = ui->pushButton_13;
    buttons[13] = ui->pushButton_14;
    buttons[14] = ui->pushButton_15;
    buttons[15] = ui->pushButton_16;
}

sauce::~sauce()
{
    delete ui;
}

void sauce::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 16; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sauce::enableButtons(){
    for (int i = 0; i < 16; i++) {
        buttons[i]->setEnabled(true);
    }
}

void sauce::on_pushButton_1_clicked()
{
    if(btnFlag) {
        ui->label->setText("랜치 드레싱");
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_1.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_2_clicked()
{
    if(btnFlag) {
        ui->label->setText("마요네즈");
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_2.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_3_clicked()
{
    if(btnFlag) {
        ui->label->setText("머스타드");
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_3.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_4_clicked()
{
    if(btnFlag) {
        ui->label->setText("홀스래디쉬");
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_4.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_5_clicked()
{
    if(btnFlag) {
        ui->label->setText("스위트 어니언");
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_5.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_6_clicked()
{
    if(btnFlag) {
        ui->label->setText("사우스 웨스트");
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_6.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_7_clicked()
{
    if(btnFlag) {
        ui->label->setText("사우전 아일랜드");
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_7.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_7);
    } else {
        ui->label->clear();
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_7.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_8_clicked()
{
    if(btnFlag) {
        ui->label->setText("허니 머스타드");
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_8.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_8);
    } else {
        ui->label->clear();
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_8.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_9_clicked()
{
    if(btnFlag) {
        ui->label->setText("스위트 칠리");
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_9.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_9);
    } else {
        ui->label->clear();
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_9.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_10_clicked()
{
    if(btnFlag) {
        ui->label->setText("이탈리안 드레싱");
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_10.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_10);
    } else {
        ui->label->clear();
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_10.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_11_clicked()
{
    if(btnFlag) {
        ui->label->setText("스모크 바비큐");
        ui->pushButton_11->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_11.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_11);
    } else {
        ui->label->clear();
        ui->pushButton_11->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_11.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_12_clicked()
{
    if(btnFlag) {
        ui->label->setText("핫칠리");
        ui->pushButton_12->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_12.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_12);
    } else {
        ui->label->clear();
        ui->pushButton_12->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_12.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_13_clicked()
{
    if(btnFlag) {
        ui->label->setText("와인 식초");
        ui->pushButton_13->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_13.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_13);
    } else {
        ui->label->clear();
        ui->pushButton_13->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_13.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_14_clicked()
{
    if(btnFlag) {
        ui->label->setText("올리브 오일");
        ui->pushButton_14->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_14.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_14);
    } else {
        ui->label->clear();
        ui->pushButton_14->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_14.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_15_clicked()
{
    if(btnFlag) {
        ui->label->setText("소금");
        ui->pushButton_15->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_15.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_15);
    } else {
        ui->label->clear();
        ui->pushButton_15->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_15.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_16_clicked()
{
    if(btnFlag) {
        ui->label->setText("후추");
        ui->pushButton_16->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_16.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_16);
    } else {
        ui->label->clear();
        ui->pushButton_16->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_16.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sauce::on_pushButton_next_clicked()
{

}

void sauce::on_pushButton_back_clicked()
{
    this->hide();
}
