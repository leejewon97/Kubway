#include "sandwich_premium.h"
#include "ui_sandwich_premium.h"

sandwich_premium::sandwich_premium(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwich_premium)
{
    ui->setupUi(this);
    ui->label->clear();
    btnFlag = true;

    connect(b, SIGNAL(buttonPressed()), this, SLOT(closeAll()));

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

void sandwich_premium::setStringLength(int s) {
    strlen = s;
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
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "쉬림프15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_2_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "쉬림프아보카도15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_3_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "스테이크&치즈15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_4_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "터키베이컨아보카도15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_5_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "치킨베이컨랜치15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_6_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "써브웨이멜트15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_7_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "터키베이컨15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_7.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_7);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_7.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_8_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "이탈리안비엘티15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_8.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_8);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_8.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_9_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "치킨데리야끼15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_9.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_9);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_9->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_9.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_10_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "폴드포크15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_on/t_10.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_10);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_10->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_10.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_premium::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
            b->setString(getString());
            b->setStringLength(str.length());
            b->show();
    }
}

void sandwich_premium::on_pushButton_back_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_6.png);");
    btnFlag = true;
    str.remove(strlen,500);
    enableButtons();
    this->hide();
}

void sandwich_premium::on_pushButton_home_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/premium/click_off/t_6.png);");
    btnFlag = true;
    str.clear();
    enableButtons();
    emit buttonPressed();
}

void sandwich_premium::closeAll()
{
    b->hide();
    on_pushButton_home_clicked();
}
