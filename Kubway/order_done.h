#ifndef ORDER_DONE_H
#define ORDER_DONE_H

#include <QWidget>

namespace Ui {
class order_done;
}

class order_done : public QWidget
{
    Q_OBJECT

public:
    explicit order_done(QWidget *parent = nullptr);
    ~order_done();

private:
    Ui::order_done *ui;
};

#endif // ORDER_DONE_H
