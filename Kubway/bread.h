#ifndef BREAD_H
#define BREAD_H

#include <QWidget>
#include "cheese.h"

namespace Ui {
class bread;
}

class bread : public QWidget
{
    Q_OBJECT

public:
    explicit bread(QWidget *parent = nullptr);
    ~bread();
    bool flag;

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::bread *ui;
    cheese c;
};

#endif // BREAD_H
