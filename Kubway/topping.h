#ifndef TOPPING_H
#define TOPPING_H

#include <QWidget>
#include <QPushButton>
#include "vegetable.h"

namespace Ui {
class topping;
}

class topping : public QWidget
{
    Q_OBJECT

public:
    explicit topping(QWidget *parent = nullptr);
    ~topping();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

private:
    Ui::topping *ui;
    vegetable v;
    bool btnFlag;
    QPushButton* buttons[8];
};

#endif // TOPPING_H
