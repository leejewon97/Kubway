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
    buttons[6] = ui->pushButton_7;
    buttons[7] = ui->pushButton_8;
    buttons[8] = ui->pushButton_9;
    buttons[9] = ui->pushButton_10;
}

sandwich_premium::~sandwich_premium()
{
    delete ui;
}

void sandwich_premium::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 10; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwich_premium::enableButtons(){
    for (int i = 0; i < 10; i++) {
        buttons[i]->setEnabled(true);
    }
}

void sandwich_premium::setString(QString s) {
    str = s;
}
QString sandwich_premium::getString() {
    return str;
}

void sandwich_premium::on_pushButton_1_clicked()
{
    if(btnFlag) {
        str.append("쉬림프\n");
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(4);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_2_clicked()
{
    if(btnFlag) {
        str.append("쉬림프 아보카도\n");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(9);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_3_clicked()
{
    if(btnFlag) {
        str.append("스테이크 & 치즈\n");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(10);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_4_clicked()
{
    if(btnFlag) {
        str.append("터키 베이컨 아보카도\n");
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        str.chop(12);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_5_clicked()
{
    if(btnFlag) {
        str.append("치킨 베이컨 랜치\n");
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(10);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_6_clicked()
{
    if(btnFlag) {
        str.append("써브웨이 멜트\n");
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(8);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_7_clicked()
{
    if(btnFlag) {
        str.append("터키 베이컨\n");
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_7.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_7);
    } else {
        str.chop(7);
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_7.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_8_clicked()
{
    if(btnFlag) {
        str.append("스파이시 이탈리안\n");
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_8.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_8);
    } else {
        str.chop(10);
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_8.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_9_clicked()
{
    if(btnFlag) {
        str.append("치킨 데리야끼\n");
        ui->label->setText(getString());
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_9.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_9);
    } else {
        str.chop(8);
        ui->label->setText(getString());
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_9.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_10_clicked()
{
    if(btnFlag) {
        str.append("폴드포크\n");
        ui->label->setText(getString());
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_10.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_10);
    } else {
        str.chop(5);
        ui->label->setText(getString());
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_10.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
            b.setString(getString());
            b.show();
    }
}

void sandwich_premium::on_pushButton_back_clicked()
{
    this->hide();
}
