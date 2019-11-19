#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "bread.h"

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::mainwindow *ui;
    bread b;
    bool flag;
};

#endif // MAINWINDOW_H
