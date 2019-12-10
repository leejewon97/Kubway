#include "accounts.h"
#include "ui_accounts.h"

#include <QFile>


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

void accounts::text_set(){
    QString  fileName = QApplication::applicationDirPath() + "/../../kubway/recipe.txt";
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "not open file";
        return;
    }
    QTextStream stream(&file);
    QString str;

    str = stream.readAll();

    ui->label->setText(str);

    file.close();
}
