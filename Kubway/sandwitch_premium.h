#ifndef SANDWITCH_PREMIUM_H
#define SANDWITCH_PREMIUM_H

#include <QWidget>
#include <QPushButton>
#include <bread.h>

namespace Ui {
class sandwitch_premium;
}

class sandwitch_premium : public QWidget
{
    Q_OBJECT

public:
    explicit sandwitch_premium(QWidget *parent = nullptr);
    ~sandwitch_premium();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

    void on_pushButton_back_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::sandwitch_premium *ui;
    bool btnFlag;
    QPushButton* buttons[10];
    bread b;
};

#endif // SANDWITCH_PREMIUM_H
