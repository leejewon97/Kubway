#ifndef RECIPE_H
#define RECIPE_H

#include <QWidget>
#include <QPushButton>
#include "order_done.h"

namespace Ui {
class recipe;
}

class recipe : public QWidget
{
    Q_OBJECT

public:
    explicit recipe(QWidget *parent = nullptr);
    ~recipe();

signals:
    void buttonPressed();

private slots:
    void on_pushButton_clicked();

    void closeAll();


    void on_pushButton_home_clicked();

private:
    Ui::recipe *ui;
    order_done *od = new order_done;
};

#endif // RECIPE_H
