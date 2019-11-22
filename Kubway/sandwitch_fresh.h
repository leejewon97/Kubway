#ifndef SANDWITCH_FRESH_H
#define SANDWITCH_FRESH_H

#include <QWidget>
#include <QPushButton>
#include <bread.h>

namespace Ui {
class sandwitch_fresh;
}

class sandwitch_fresh : public QWidget
{
    Q_OBJECT

public:
    explicit sandwitch_fresh(QWidget *parent = nullptr);
    ~sandwitch_fresh();

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

private:
    Ui::sandwitch_fresh *ui;
    bool btnFlag;
    QPushButton* buttons[6];
    bread b;
};

#endif // SANDWITCH_FRESH_H
