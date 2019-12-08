#include "cheese.h"
#include "ui_cheese.h"


cheese::cheese(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cheese)
{
    ui->setupUi(this);
    ui->label->clear();
    btnFlag = true;

    connect(t, SIGNAL(buttonPressed()), this, SLOT(closeAll()));

    buttons[0] = ui->pushButton_1;
    buttons[1] = ui->pushButton_2;
    buttons[2] = ui->pushButton_3;
}

cheese::~cheese()
{
    delete ui;
}

void cheese::setStringLength(int s) {
    strlen = s;
}

void cheese::setString(QString s) {
    str = s;
}
QString cheese::getString() {
    return str;
}
void cheese::disableButtons(QPushButton* exBtn){
    for (int i = 0; i < 3; i++) {
        buttons[i]->setDisabled(true);
    }
    exBtn->setEnabled(true);
}

void cheese::enableButtons(){
    for (int i = 0; i < 3; i++) {
        buttons[i]->setEnabled(true);
    }
}

void cheese::on_pushButton_1_clicked()
{
    if(btnFlag) {
        str.append("아메리칸 치즈\n");
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(8);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_1.png);");
        btnFlag = true;
        enableButtons();
    }

}

void cheese::on_pushButton_2_clicked()
{
    if(btnFlag) {
        str.append("슈레드 치즈\n");
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(6);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_2.png);");
        btnFlag = true;
        enableButtons();
    }

}

void cheese::on_pushButton_3_clicked()
{
    if(btnFlag) {
        str.append("모짜렐라 치즈\n");
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_on/cheese_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(8);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_3.png);");
        btnFlag = true;
        enableButtons();
    }

}

void cheese::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
        t->setString(getString());
        t->setStringLength(str.length());
        t->show();
    }
}

void cheese::on_pushButton_back_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_3.png);");
    btnFlag = true;
    str.remove(strlen,500);
    enableButtons();
    this->hide();
}

void cheese::closeAll()
{
    t->hide();
    on_pushButton_home_clicked();
}

void cheese::on_pushButton_home_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/cheese_page/click_off/cheese_3.png);");
    btnFlag = true;
    str.clear();
    enableButtons();
    emit buttonPressed();
}
