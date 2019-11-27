#ifndef BREAD_H
#define BREAD_H

#include <QWidget>
#include <QPushButton>
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

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::bread *ui;
    cheese c;
    bool btnFlag;
    QPushButton* buttons[6];
    int it;
};

#endif // BREAD_H
