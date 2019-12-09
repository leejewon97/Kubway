#include "topping.h"
#include "ui_topping.h"

topping::topping(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topping)
{
    ui->setupUi(this);
    ui->label->clear();

    connect(v, SIGNAL(buttonPressed()), this, SLOT(closeAll()));

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


void topping::setUi(QString s) {
    ui->label->setText(s);
}

void topping::setStringLength(int s) {
    strlen = s;
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
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "더블업15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_1.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_1);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_1.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_2_clicked()
{
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "에그마요15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_2.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_2);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_2.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_3_clicked()
{
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "페퍼로니15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_3.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_3);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_3.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_4_clicked()
{
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "베이컨15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_4.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_4);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_4.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_5_clicked()
{
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "더블치즈15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_5.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_5);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_5.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_6_clicked()
{
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "오믈렛15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_6.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_6);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_6.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_7_clicked()
{
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "아보카도15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_7.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_7);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_7.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_8_clicked()
{
    tf.read_Tnode(&tf.head);
    char* search = tf.find_Tnode(tf.head, "베이컨비츠15cm");
    if(btnFlag) {
        str.append(search);
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_on/t_8.png);");
        btnFlag = false;
        disableButtons(ui->pushButton_8);
    } else {
        str.chop(QString(search).length());
        ui->label->setText(getString());
        ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_8.png);");
        btnFlag = true;
        enableButtons();
    }

}

void topping::on_pushButton_next_clicked()
{
    if(btnFlag == false) {
        v->setString(getString());
        v->setStringLength(str.length());
        v->setUi(str);
        v->show();
    }
}

void topping::on_pushButton_back_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_6.png);");
    ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_7.png);");
    ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_8.png);");
    btnFlag = true;
    str.remove(strlen,500);
    enableButtons();
    this->hide();
}

void topping::closeAll()
{
    v->hide();
    on_pushButton_home_clicked();
}


void topping::on_pushButton_home_clicked()
{
    ui->pushButton_1->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_1.png);");
    ui->pushButton_2->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_2.png);");
    ui->pushButton_3->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_3.png);");
    ui->pushButton_4->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_4.png);");
    ui->pushButton_5->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_5.png);");
    ui->pushButton_6->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_6.png);");
    ui->pushButton_7->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_7.png);");
    ui->pushButton_8->setStyleSheet("background-image: url(:/image/topping_page/click_off/t_8.png);");
    btnFlag = true;
    str.clear();
    enableButtons();
    emit buttonPressed();
}
