#ifndef TOPPING_H
#define TOPPING_H

#include <QWidget>

namespace Ui {
class topping;
}

class topping : public QWidget
{
    Q_OBJECT

public:
    explicit topping(QWidget *parent = nullptr);
    ~topping();

private:
    Ui::topping *ui;
};

#endif // TOPPING_H
