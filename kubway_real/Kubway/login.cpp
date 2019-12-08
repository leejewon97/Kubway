#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_login_clicked()
{
    QString id = ui->lineEdit_ID->text();
    QString password = ui->lineEdit_password->text();

    if(id == "spsj1004" && password == "1111") {
        this->hide();
        m.show();
    }
    else QMessageBox::warning(this, "Login", "ID와 Password를 확인하세요!!");
}
