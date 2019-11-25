#ifndef sandwich_premium_H
#define sandwich_premium_H

#include <QWidget>
#include <QPushButton>
#include "bread.h"

namespace Ui {
class sandwich_premium;
}

class sandwich_premium : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich_premium(QWidget *parent = nullptr);
    ~sandwich_premium();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::sandwich_premium *ui;
    bread b;
    bool btnFlag;
    QPushButton* buttons[10];
};

#endif // sandwich_premium_H
