#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <QWidget>

namespace Ui {
class vegetable;
}

class vegetable : public QWidget
{
    Q_OBJECT

public:
    explicit vegetable(QWidget *parent = nullptr);
    ~vegetable();

private:
    Ui::vegetable *ui;
};

#endif // VEGETABLE_H
