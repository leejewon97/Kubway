#ifndef BREAD_H
#define BREAD_H

#include <QWidget>
#include <QPushButton>
#include <QString>
#include "cheese.h"

using namespace std;

namespace Ui {
class bread;
}

class bread : public QWidget
{
    Q_OBJECT

public:
    explicit bread(QWidget *parent = nullptr);
    ~bread();

    void setString(QString s);

    QString getString();

    int getClickHome();

    void setClickHome(int h);

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
    Ui::bread *ui;
    cheese *c = new cheese;
    bool btnFlag;
    QPushButton* buttons[6];
    QString str;
    int click_home;
};

#endif // BREAD_H