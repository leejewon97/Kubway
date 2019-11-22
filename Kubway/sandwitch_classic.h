#ifndef SANDWITCH_CLASSIC_H
#define SANDWITCH_CLASSIC_H

#include <QWidget>
#include <QPushButton>
#include <bread.h>

namespace Ui {
class sandwitch_classic;
}

class sandwitch_classic : public QWidget
{
    Q_OBJECT

public:
    explicit sandwitch_classic(QWidget *parent = nullptr);
    ~sandwitch_classic();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

    void on_pushButton_back_clicked();

    void on_pushButton_next_clicked();

private:
    Ui::sandwitch_classic *ui;
    bool btnFlag;
    QPushButton* buttons[6];
    bread b;
};

#endif // SANDWITCH_CLASSIC_H
