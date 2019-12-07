#include "sandwich_classic.h"
#include "ui_sandwich_classic.h"

sandwich_classic::sandwich_classic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sandwich_classic)
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

    //read_Node(&head);
}

sandwich_classic::~sandwich_classic()
{
    delete ui;
}

void sandwich_classic::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void sandwich_classic::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}

void sandwich_classic::setString(QString s) {
    str = s;
}
QString sandwich_classic::getString() {
    return str;
}

void sandwich_classic::on_pushButton_1_clicked()
{
    read_Node(&head);
    if(btnFlag) {
        // 깨짐
        str.append(find_Node(head, "에그마요15cm"));
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(5);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_classic::on_pushButton_2_clicked()
{
    if(btnFlag) {
        str.append("참치\n");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(3);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_classic::on_pushButton_3_clicked()
{
    if(btnFlag) {
        str.append("햄\n");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(2);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_classic::on_pushButton_4_clicked()
{
    if(btnFlag) {
        str.append("미트볼\n");
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        str.chop(4);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_classic::on_pushButton_5_clicked()
{
    if(btnFlag) {
        str.append("비엘티\n");
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(4);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_classic::on_pushButton_6_clicked()
{
    if(btnFlag) {
        str.append("이탈리안 비엘티\n");
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(9);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sandwich_page/classic/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }
}

void sandwich_classic::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
            b.setString(getString());
            b.show();
    }
}

void sandwich_classic::on_pushButton_back_clicked()
{
    this->hide();
}
