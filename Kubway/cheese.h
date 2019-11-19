#ifndef CHEESE_H
#define CHEESE_H

#include <QWidget>
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

private:
    Ui::cheese *ui;
    topping t;
    bool flag;
};

#endif // CHEESE_H
