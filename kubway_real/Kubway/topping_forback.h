#ifndef TOPPING_FORBACK_H
#define TOPPING_FORBACK_H

#include <QWidget>

namespace Ui {
class topping_forback;
}

class topping_forback : public QWidget
{
    Q_OBJECT

public:
    explicit topping_forback(QWidget *parent = nullptr);
    ~topping_forback();

private:
    Ui::topping_forback *ui;
};

#endif // TOPPING_FORBACK_H
