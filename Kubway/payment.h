#ifndef PAYMENT_H
#define PAYMENT_H

#include <QWidget>
#include <QPushButton>
#include "recipe.h"

namespace Ui {
class payment;
}

class payment : public QWidget
{
    Q_OBJECT

public:
    explicit payment(QWidget *parent = nullptr);
    ~payment();

private slots:
    void on_pushButton_next_clicked();

private:
    Ui::payment *ui;
    recipe r;
};

#endif // PAYMENT_H
