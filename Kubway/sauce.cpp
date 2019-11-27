#include "sauce.h"
#include "ui_sauce.h"

sauce::sauce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sauce)
{
    ui->setupUi(this);
    ui->label->clear();
    for (int i = 0; i < 16; i++) {
        btnFlag[i] = true;
    }
}

sauce::~sauce()
{
    delete ui;
}

void sauce::on_pushButton_1_clicked()
{
    if(btnFlag[0]) {
        ui->label->setText("랜치 드레싱");
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_1.png);");
        btnFlag[0] = false;
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_1.png);");
        btnFlag[0] = true;
    }
}

void sauce::on_pushButton_2_clicked()
{
    if(btnFlag[1]) {
        ui->label->setText("마요네즈");
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_2.png);");
        btnFlag[1] = false;
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_2.png);");
        btnFlag[1] = true;
    }
}

void sauce::on_pushButton_3_clicked()
{
    if(btnFlag[2]) {
        ui->label->setText("머스타드");
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_3.png);");
        btnFlag[2] = false;
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_3.png);");
        btnFlag[2] = true;
    }
}

void sauce::on_pushButton_4_clicked()
{
    if(btnFlag[3]) {
        ui->label->setText("홀스래디쉬");
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_4.png);");
        btnFlag[3] = false;
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_4.png);");
        btnFlag[3] = true;
    }
}

void sauce::on_pushButton_5_clicked()
{
    if(btnFlag[4]) {
        ui->label->setText("스위트 어니언");
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_5.png);");
        btnFlag[4] = false;
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_5.png);");
        btnFlag[4] = true;
    }
}

void sauce::on_pushButton_6_clicked()
{
    if(btnFlag[5]) {
        ui->label->setText("사우스 웨스트");
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_6.png);");
        btnFlag[5] = false;
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_6.png);");
        btnFlag[5] = true;
    }
}

void sauce::on_pushButton_7_clicked()
{
    if(btnFlag[6]) {
        ui->label->setText("사우전 아일랜드");
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_7.png);");
        btnFlag[6] = false;
    } else {
        ui->label->clear();
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_7.png);");
        btnFlag[6] = true;
    }
}

void sauce::on_pushButton_8_clicked()
{
    if(btnFlag[7]) {
        ui->label->setText("허니 머스타드");
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_8.png);");
        btnFlag[7] = false;
    } else {
        ui->label->clear();
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_8.png);");
        btnFlag[7] = true;
    }
}

void sauce::on_pushButton_9_clicked()
{
    if(btnFlag[8]) {
        ui->label->setText("스위트 칠리");
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_9.png);");
        btnFlag[8] = false;
    } else {
        ui->label->clear();
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_9.png);");
        btnFlag[8] = true;
    }
}

void sauce::on_pushButton_10_clicked()
{
    if(btnFlag[9]) {
        ui->label->setText("이탈리안 드레싱");
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_10.png);");
        btnFlag[9] = false;
    } else {
        ui->label->clear();
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_10.png);");
        btnFlag[9] = true;
    }
}

void sauce::on_pushButton_11_clicked()
{
    if(btnFlag[10]) {
        ui->label->setText("스모크 바비큐");
        ui->pushButton_11->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_11.png);");
        btnFlag[10] = false;
    } else {
        ui->label->clear();
        ui->pushButton_11->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_11.png);");
        btnFlag[10] = true;
    }
}

void sauce::on_pushButton_12_clicked()
{
    if(btnFlag[11]) {
        ui->label->setText("핫칠리");
        ui->pushButton_12->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_12.png);");
        btnFlag[11] = false;
    } else {
        ui->label->clear();
        ui->pushButton_12->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_12.png);");
        btnFlag[11] = true;
    }
}

void sauce::on_pushButton_13_clicked()
{
    if(btnFlag[12]) {
        ui->label->setText("와인 식초");
        ui->pushButton_13->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_13.png);");
        btnFlag[12] = false;
    } else {
        ui->label->clear();
        ui->pushButton_13->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_13.png);");
        btnFlag[12] = true;
    }
}

void sauce::on_pushButton_14_clicked()
{
    if(btnFlag[13]) {
        ui->label->setText("올리브 오일");
        ui->pushButton_14->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_14.png);");
        btnFlag[13] = false;
    } else {
        ui->label->clear();
        ui->pushButton_14->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_14.png);");
        btnFlag[13] = true;
    }
}

void sauce::on_pushButton_15_clicked()
{
    if(btnFlag[14]) {
        ui->label->setText("소금");
        ui->pushButton_15->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_15.png);");
        btnFlag[14] = false;
    } else {
        ui->label->clear();
        ui->pushButton_15->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_15.png);");
        btnFlag[14] = true;
    }
}

void sauce::on_pushButton_16_clicked()
{
    if(btnFlag[15]) {
        ui->label->setText("후추");
        ui->pushButton_16->setStyleSheet("background-image: url(:/image/sauce_page/click_on/sauce_16.png);");
        btnFlag[15] = false;
    } else {
        ui->label->clear();
        ui->pushButton_16->setStyleSheet("background-image: url(:/image/sauce_page/click_off/sauce_16.png);");
        btnFlag[15] = true;
    }
}

void sauce::on_pushButton_next_clicked()
{

}

void sauce::on_pushButton_back_clicked()
{
    this->hide();
}
