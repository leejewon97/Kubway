#ifndef CHEESE_H
#define CHEESE_H

#include <QWidget>

namespace Ui {
class cheese;
}

class cheese : public QWidget
{
    Q_OBJECT

public:
    explicit cheese(QWidget *parent = nullptr);
    ~cheese();

private:
    Ui::cheese *ui;
};

#endif // CHEESE_H
