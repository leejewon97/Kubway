#ifndef CHEESE_H
#define CHEESE_H

#include <QWidget>
#include <QPushButton>
#include <QString>
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

    void setString(QString s);

    QString getString();

    void setStringLength(int s);

signals:
    void buttonPressed();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

    void closeAll();


    void on_pushButton_home_clicked();

private:
    Ui::cheese *ui;
    topping *t = new topping;
    bool btnFlag;
    QString str;
    QPushButton* buttons[3];
    int strlen;
};

#endif // CHEESE_H
