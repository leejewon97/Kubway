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

signals:
    void buttonPressed();

private slots:
    void on_pushButton_next_clicked();

    void closeAll();


    void on_pushButton_home_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::payment *ui;
    recipe *r = new recipe;
};

#endif // PAYMENT_H
