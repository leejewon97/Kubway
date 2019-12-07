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

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

private:
    Ui::cheese *ui;
    topping t;
    bool btnFlag;
    QString str;
    QPushButton* buttons[3];
};

#endif // CHEESE_H
