#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPushButton>
#include "sandwich.h"

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

    void setString(QString s);

    QString getString();

private slots:

    void closeAll();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();    

private:
    Ui::mainwindow *ui;
    sandwich *s = new sandwich();
    bread b;
};

#endif // MAINWINDOW_H
