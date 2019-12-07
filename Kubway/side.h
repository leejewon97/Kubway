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

private slots:
    void on_one_btn_clicked();

    void on_set_btn_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::side *ui;
    side_select ss;
};

#endif // SIDE_H
