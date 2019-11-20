#ifndef CHEESE_H
#define CHEESE_H

#include <QWidget>
#include <QPushButton>
#include "topping.h"

namespace Ui {
class cheese;
}

class cheese : public QWidget
{
    Q_OBJECT

public:
    explicit cheese(QWidget *parent = nullptr);
    ~cheese();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

private:
    Ui::cheese *ui;
    topping t;
    bool btnFlag;
    QPushButton* buttons[3];
};

#endif // CHEESE_H
