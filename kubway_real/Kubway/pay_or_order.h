#ifndef PAY_OR_ORDER_H
#define PAY_OR_ORDER_H

#include <QWidget>
#include <QPushButton>
#include "card_or_cash.h"


namespace Ui {
class pay_or_order;
}

class pay_or_order : public QWidget
{
    Q_OBJECT

public:
    explicit pay_or_order(QWidget *parent = nullptr);
    ~pay_or_order();

    void setString(QString s);

    QString getString();

signals:
    void buttonPressed();

private slots:
    void on_pay_btn_clicked();

    void on_order_btn_clicked();

    void on_pushButton_back_clicked();

    void closeAll();


    void on_pushButton_home_clicked();

private:
    Ui::pay_or_order *ui;
    card_or_cash *coc = new card_or_cash;
    QString str;
};

#endif // PAY_OR_ORDER_H
