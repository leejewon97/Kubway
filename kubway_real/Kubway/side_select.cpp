#include "side_select.h"
#include "ui_side_select.h"
#include "QtDebug"

side_select::side_select(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::side_select)
{
    ui->setupUi(this);
    ui->label->clear();

    connect(poo, SIGNAL(buttonPressed()), this, SLOT(closeAll()));


    for (int i = 0; i < 2; i++) {
        btnFlag[i] = true;
    }
    buttons[0] = ui->pushButton_1;
    buttons[1] = ui->pushButton_2;
    buttons[2] = ui->pushButton_3;
    buttons[3] = ui->pushButton_4;
    buttons[4] = ui->pushButton_5;
    buttons[5] = ui->pushButton_6;
    buttons[6] = ui->pushButton_7;
}

side_select::~side_select()
{
    delete ui;
}

void side_select::setUi(QString s) {
    ui->label->setText(s);
}

void side_select::setStringLength(int s) {
    strlen = s;
}

bool side_select::getClickOne() {
    return click_one;
}
void side_select::setClickOne() {
    poo->setString(getString());
    poo->show();
    this->close();
}
void side_select::setString(QString s) {
    str = s;
}
QString side_select::getString() {
    return str;
}

void side_select::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 5; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void side_select::disableButtons2(QPushButton* exBtn){
    for (int i = 5; i < 7; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}
void side_select::enableButtons(){
    for (int i = 0; i < 5; i++) {
        buttons[i]->setEnabled(true);
    } 
}

void side_select::enableButtons2(){
    for (int i = 5; i < 7; i++) {
        buttons[i]->setEnabled(true);
    }
}
void side_select::on_pushButton_1_clicked()
{
    if(btnFlag[0]){
        str.append("더블 초코칩");
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_1.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_1);
    } else {
        int index = str.indexOf("더블 초코칩");
        str.remove(index,6);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_1.png);");
        btnFlag[0] = true;
        enableButtons();
    }
}

void side_select::on_pushButton_2_clicked()
{
    if(btnFlag[0]){
        str.append("초코칩 ");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_2.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_2);
    } else {
        int index = str.indexOf("초코칩 ");
        str.remove(index,4);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_2.png);");
        btnFlag[0] = true;
        enableButtons();
    }
}

void side_select::on_pushButton_3_clicked()
{
    if(btnFlag[0]){
        str.append("오트밀 레이즌 ");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_3.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_3);
    } else {
        int index = str.indexOf("오트밀 레이즌 ");
        str.remove(index,8);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_3.png);");
        btnFlag[0] = true;
        enableButtons();
    }
}

void side_select::on_pushButton_4_clicked()
{
    if(btnFlag[0]){
        str.append("라즈베리 치즈케익 ");
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_4.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_4);
    } else {
        int index = str.indexOf("라즈베리 치즈케익 ");
        str.remove(index,10);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_4.png);");
        btnFlag[0] = true;
        enableButtons();
    }
}

void side_select::on_pushButton_5_clicked()
{
    if(btnFlag[0]){
        str.append("화이트 초코 마카다미야 ");
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_5.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_5);
    } else {
        int index = str.indexOf("화이트 초코 마카다미야 ");
        str.remove(index,13);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_5.png);");
        btnFlag[0] = true;
        enableButtons();
    }
}

void side_select::on_pushButton_6_clicked()
{
    if(btnFlag[1]){
        str.append("탄산");
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_7.png);");
        btnFlag[1] = false;
        disableButtons2(ui->pushButton_6);
    } else {
        int index = str.indexOf("탄산");
        str.remove(index,4);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_7.png);");
        btnFlag[1] = true;
        enableButtons2();
    }
}

void side_select::on_pushButton_7_clicked()
{
    if(btnFlag[1]){
        str.append("커피");
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_8.png);");
        btnFlag[1] = false;
        disableButtons2(ui->pushButton_7);
    } else {
        int index = str.indexOf("커피");
        str.remove(index,2);
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_8.png);");
        btnFlag[1] = true;
        enableButtons2();
    }
}



void side_select::on_pushButton_back_clicked()
{
    for (int i = 0; i < 2; i++) {
        btnFlag[i] = true;
    }
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_7.png);");
    ui->pushButton_7->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_8.png);");
    str.remove(strlen, 500);
    enableButtons();
    enableButtons2();
    this->hide();
}

void side_select::on_pushButton_next_clicked()
{
    if(!(btnFlag[0]||btnFlag[1])){
        poo->setString(getString());
        poo->show();
    }
}

void side_select::closeAll()
{
    poo->hide();
    on_pushButton_home_clicked();
}


void side_select::on_pushButton_home_clicked()
{
    for (int i = 0; i < 2; i++) {
        btnFlag[i] = true;
    }
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_7.png);");
    ui->pushButton_7->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_8.png);");
    str.clear();
    enableButtons();
    enableButtons2();
    emit buttonPressed();
}
