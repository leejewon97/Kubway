#ifndef SIDE_H
#define SIDE_H

#include <QWidget>

namespace Ui {
class side;
}

class side : public QWidget
{
    Q_OBJECT

public:
    explicit side(QWidget *parent = nullptr);
    ~side();

private slots:
    void on_one_btn_clicked();

    void on_set_btn_clicked();

private:
    Ui::side *ui;
};

#endif // SIDE_H
