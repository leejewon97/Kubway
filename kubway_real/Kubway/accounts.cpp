#include "accounts.h"
#include "ui_accounts.h"

accounts::accounts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accounts)
{
    ui->setupUi(this);
}

accounts::~accounts()
{
    delete ui;
}

void accounts::on_pushButton_back_clicked()
{
    this->hide();
}
