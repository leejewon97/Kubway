#include "sandwich_new.h"
#include "ui_sandwich_new.h"

sandwich_new::sandwich_new(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwich_new)
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
}

sandwich_new::~sandwich_new()
{
    delete ui;
}

void sandwich_new::setStringLength(int s) {
    strlen = s;
}

void sandwich_new::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwich_new::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}

void sandwich_new::setString(QString s) {
    str = s;
}
QString sandwich_new::getString() {
    return str;
}

void sandwich_new::on_pushButton_1_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "이탈리안비엘티15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_new::on_pushButton_2_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "이탈리안비엘티15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_new::on_pushButton_3_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "이탈리안비엘티15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_new::on_pushButton_4_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "이탈리안비엘티15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_new::on_pushButton_5_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "이탈리안비엘티15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_new::on_pushButton_6_clicked()
{
    fb.read_Node(&fb.head);
    char* search = fb.find_Node(fb.head, "이탈리안비엘티15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_new::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
            b->setString(getString());
            b->setStringLength(str.length());
            b->show();
    }

}

void sandwich_new::on_pushButton_back_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_6.png);");
    btnFlag = true;
    str.remove(strlen,500);
    enableButtons();
    this->hide();
}

void sandwich_new::on_pushButton_home_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/new/click_off/t_6.png);");
    btnFlag = true;
    str.clear();
    enableButtons();
    emit buttonPressed();
}

void sandwich_new::closeAll()
{
    b->hide();
    on_pushButton_home_clicked();
}
