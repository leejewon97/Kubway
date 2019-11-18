#ifndef CHEESE_H
#define CHEESE_H

#include <QWidget>
#include "bread.h"

namespace Ui {
class cheese;
}

class cheese : public QWidget
{
    Q_OBJECT

public:
    explicit cheese(QWidget *parent = nullptr);
    ~cheese();

private slots:
    void on_pushButton_10_clicked();

private:
    Ui::cheese *ui;
    bread b;
};

#endif // CHEESE_H
