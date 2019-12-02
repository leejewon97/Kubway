#include "side_select.h"
#include "ui_side_select.h"

side_select::side_select(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::side_select)
{
    ui->setupUi(this);
    ui->label->clear();
    for (int i = 0; i < 2; i++) {
        btnFlag[i] = true;
    }
    buttons[0] = ui->pushButton_1;
    buttons[1] = ui->pushButton_2;
    buttons[2] = ui->pushButton_3;
    buttons[3] = ui->pushButton_4;
    buttons[4] = ui->pushButton_5;
    buttons[5] = ui->pushButton_6;
}

side_select::~side_select()
{
    delete ui;
}

void side_select::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void side_select::enableButtons(){
    for (int i = 0; i < 6; i++) {
        buttons[i]->setEnabled(true);
    }
}
void side_select::on_pushButton_1_clicked()
{
    if(btnFlag[0]){
        ui->label->setText("양상추");
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_1.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_1);
    } else {
        ui->label->clear();
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_1.png);");
        btnFlag[0] = true;
    }
}

void side_select::on_pushButton_2_clicked()
{
    if(btnFlag[0]){
        ui->label->setText("토마토");
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_2.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_2);
    } else {
        ui->label->clear();
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_2.png);");
        btnFlag[0] = true;
    }
}

void side_select::on_pushButton_3_clicked()
{
    if(btnFlag[0]){
        ui->label->setText("오이");
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_3.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_3);
    } else {
        ui->label->clear();
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_3.png);");
        btnFlag[0] = true;
    }
}

void side_select::on_pushButton_4_clicked()
{
    if(btnFlag[0]){
        ui->label->setText("피망");
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_4.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_4);
    } else {
        ui->label->clear();
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_4.png);");
        btnFlag[0] = true;
    }
}

void side_select::on_pushButton_5_clicked()
{
    if(btnFlag[0]){
        ui->label->setText("양파");
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_5.png);");
        btnFlag[0] = false;
        disableButtons(ui->pushButton_5);
    } else {
        ui->label->clear();
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_5.png);");
        btnFlag[0] = true;
    }
}

void side_select::on_pushButton_6_clicked()
{
    if(btnFlag[1]){
        ui->label->setText("피클");
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_6.png);");
        btnFlag[1] = false;
    } else {
        ui->label->clear();
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_6.png);");
        btnFlag[1] = true;
    }
}

void side_select::on_pushButton_7_clicked()
{
    if(btnFlag[1]){
        ui->label->setText("올리브");
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sideselect_page/click_on/t_7.png);");
        btnFlag[1] = false;
    } else {
        ui->label->clear();
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/sideselect_page/click_off/t_7.png);");
        btnFlag[1] = true;
    }
}



void side_select::on_pushButton_back_clicked()
{
    this->hide();
}

void side_select::on_pushButton_next_clicked()
{

}
