#ifndef SIDE_H
#define SIDE_H

#include <QWidget>
#include <QPushButton>
#include <side_select.h>

namespace Ui {
class side;
}

class side : public QWidget
{
    Q_OBJECT

public:
    explicit side(QWidget *parent = nullptr);
    ~side();

    void setStringLength(int x);

    void setString(QString s);

    QString getString();

signals:
    void buttonPressed();


private slots:
    void on_one_btn_clicked();

    void on_set_btn_clicked();

    void on_pushButton_back_clicked();

    void closeAll();


    void on_pushButton_home_clicked();

private:
    Ui::side *ui;
    side_select *ss = new side_select;
    QString str;
    int strlen;
};

#endif // SIDE_H
