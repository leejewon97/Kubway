#ifndef sandwich_classic_H
#define sandwich_classic_H

#include <QWidget>
#include <QPushButton>
#include "bread.h"

namespace Ui {
class sandwich_classic;
}

class sandwich_classic : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich_classic(QWidget *parent = nullptr);
    ~sandwich_classic();

    void setString(QString s);

    QString getString();

signals:
    void buttonPressed();

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

    void on_pushButton_home_clicked();

    void closeAll();

private:
    Ui::sandwich_classic *ui;
    bread *b = new bread;
    bool btnFlag;
    QString str;
    QPushButton* buttons[6];
};

#endif // sandwich_classic_H
