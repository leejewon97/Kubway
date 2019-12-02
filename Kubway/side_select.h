#ifndef SIDE_SELECT_H
#define SIDE_SELECT_H

#include <QWidget>

namespace Ui {
class side_select;
}

class side_select : public QWidget
{
    Q_OBJECT

public:
    explicit side_select(QWidget *parent = nullptr);
    ~side_select();

private:
    Ui::side_select *ui;
};

#endif // SIDE_SELECT_H
