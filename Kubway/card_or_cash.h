#ifndef CARD_OR_CASH_H
#define CARD_OR_CASH_H

#include <QWidget>
#include "payment.h"
#include <QPushButton>

namespace Ui {
class card_or_cash;
}

class card_or_cash : public QWidget
{
    Q_OBJECT

public:
    explicit card_or_cash(QWidget *parent = nullptr);
    ~card_or_cash();

private slots:
    void on_card_btn_clicked();

    void on_cash_btn_clicked();

private:
    Ui::card_or_cash *ui;
    payment p;
};

#endif // CARD_OR_CASH_H
