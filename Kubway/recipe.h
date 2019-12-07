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

private slots:
    void on_pushButton_clicked();

private:
    Ui::recipe *ui;
    order_done od;
};

#endif // RECIPE_H
