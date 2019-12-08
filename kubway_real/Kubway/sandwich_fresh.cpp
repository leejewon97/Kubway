#include "sandwich_fresh.h"
#include "ui_sandwich_fresh.h"

sandwich_fresh::sandwich_fresh(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwich_fresh)
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

sandwich_fresh::~sandwich_fresh()
{
    delete ui;
}

void sandwich_fresh::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwich_fresh::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}

void sandwich_fresh::setString(QString s) {
    str = s;
}
QString sandwich_fresh::getString() {
    return str;
}

void sandwich_fresh::on_pushButton_1_clicked()
{
    if(btnFlag) {
        str.append("로티세리 바비큐 치킨\n");
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(12);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_fresh::on_pushButton_2_clicked()
{
    if(btnFlag) {
        str.append("로스트 치킨\n");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(7);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_fresh::on_pushButton_3_clicked()
{
    if(btnFlag) {
        str.append("로스트 비프\n");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(7);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_fresh::on_pushButton_4_clicked()
{
    if(btnFlag) {
        str.append("서브웨이 클럽\n");
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        str.chop(8);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_fresh::on_pushButton_5_clicked()
{
    if(btnFlag) {
        str.append("터키\n");
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(3);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_fresh::on_pushButton_6_clicked()
{
    if(btnFlag) {
        str.append("베지\n");
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(3);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_fresh::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
            b->setString(getString());
            b->show();
    }
}

void sandwich_fresh::on_pushButton_back_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_6.png);");
    btnFlag = true;
    str.clear();
    enableButtons();
    this->hide();
}
\
void sandwich_fresh::on_pushButton_home_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/fresh/click_off/t_6.png);");
    btnFlag = true;
    str.clear();
    enableButtons();
    emit buttonPressed();
}


void sandwich_fresh::closeAll()
{
    b->hide();
    on_pushButton_home_clicked();
}



