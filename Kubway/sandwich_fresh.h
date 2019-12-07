#ifndef sandwich_fresh_H
#define sandwich_fresh_H

#include <QWidget>
#include <QPushButton>
#include "bread.h"

namespace Ui {
class sandwich_fresh;
}

class sandwich_fresh : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich_fresh(QWidget *parent = nullptr);
    ~sandwich_fresh();

    void setString(QString s);

    QString getString();

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
    Ui::sandwich_fresh *ui;
    bread b;
    bool btnFlag;
    QString str;
    QPushButton* buttons[6];
};

#endif // sandwich_fresh_H
