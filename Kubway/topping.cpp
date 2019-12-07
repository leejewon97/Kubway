#include "topping.h"
#include "ui_topping.h"

topping::topping(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topping)
{
    ui->setupUi(this);
    ui->label->clear();

    buttons[0] = ui->pushButton_1;
    buttons[1] = ui->pushButton_2;
    buttons[2] = ui->pushButton_3;
    buttons[3] = ui->pushButton_4;
    buttons[4] = ui->pushButton_5;
    buttons[5] = ui->pushButton_6;
    buttons[6] = ui->pushButton_7;
    buttons[7] = ui->pushButton_8;
}

topping::~topping()
{
    delete ui;
}

void topping::setString(QString s) {
    str = s;
}
QString topping::getString() {
    return str;
}

void topping::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 8; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void topping::enableButtons(){
    for (int i = 0; i < 8; i++) {
        buttons[i]->setEnabled(true);
    }
}

void topping::on_pushButton_1_clicked()
{
    if(btnFlag) {
        str.append("더블 업\n");
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(5);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_2_clicked()
{
    if(btnFlag) {
        str.append("에그마요\n");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(5);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_3_clicked()
{
    if(btnFlag) {
        str.append("페페로니\n");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(5);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_4_clicked()
{
    if(btnFlag) {
        str.append("베이컨\n");
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_5_clicked()
{
    if(btnFlag) {
        str.append("더블 치즈\n");
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(6);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_6_clicked()
{
    if(btnFlag) {
        str.append("오믈렛\n");
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(4);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_7_clicked()
{
    if(btnFlag) {
        str.append("아보카도\n");
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_7.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_7);
    } else {
        str.chop(5);
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_7.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_8_clicked()
{
    if(btnFlag) {
        str.append("베이컨 비츠\n");
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_8.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_8);
    } else {
        str.chop(6);
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_8.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_next_clicked()
{
    v.setString(getString());
    v.show();
}

void topping::on_pushButton_back_clicked()
{
    this->hide();
}
