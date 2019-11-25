#ifndef sandwich_new_H
#define sandwich_new_H

#include <QWidget>
#include <QPushButton>
#include "cheese.h"

namespace Ui {
class sandwich_new;
}

class sandwich_new : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich_new(QWidget *parent = nullptr);
    ~sandwich_new();

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
    Ui::sandwich_new *ui;
    cheese c;
    bool btnFlag;
    QPushButton* buttons[6];
};

#endif // sandwich_new_H
