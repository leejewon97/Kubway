#ifndef sauce_H
#define sauce_H

#include <QWidget>
#include <QPushButton>
#include "side.h"
#include "side_select.h"

namespace Ui {
class sauce;
}

class sauce : public QWidget
{
    Q_OBJECT

public:
    explicit sauce(QWidget *parent = nullptr);
    ~sauce();

    void setString(QString s);

    QString getString();

    void setStringLength(int s);

    void setUi(QString s);

signals:
    void buttonPressed();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

    void closeAll();


    void on_pushButton_home_clicked();

private:
    Ui::sauce *ui;
    bool btnFlag[16];
    QString str;
    side *si = new side;
    side_select *ss = new side_select;
    int strlen;
};

#endif // sauce_H
