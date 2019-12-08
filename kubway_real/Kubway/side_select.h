#ifndef side_select_H
#define side_select_H

#include <QWidget>
#include <QPushButton>
#include "pay_or_order.h"

namespace Ui {
class side_select;
}

class side_select : public QWidget
{
    Q_OBJECT

public:
    explicit side_select(QWidget *parent = nullptr);
    ~side_select();

    void setString(QString s);

    QString getString();

    bool getClickOne();

    void setClickOne();

signals:
    void buttonPressed();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void disableButtons(QPushButton* exBtn);

    void disableButtons2(QPushButton* exBtn);

    void enableButtons();

    void enableButtons2();

    void on_pushButton_back_clicked();

    void on_pushButton_next_clicked();

    void closeAll();



    void on_pushButton_home_clicked();

private:
    Ui::side_select *ui;
    bool btnFlag[2];
    QString str;
    QPushButton* buttons[7];
    pay_or_order *poo = new pay_or_order;
    bool click_one =false;
    const int strlen = str.length();
};

#endif // side_select_H
