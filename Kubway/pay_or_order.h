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

private slots:
    void on_pay_btn_clicked();

    void on_order_btn_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::pay_or_order *ui;
    card_or_cash coc;
};

#endif // PAY_OR_ORDER_H
