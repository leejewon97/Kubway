#ifndef MANAGE_H
#define MANAGE_H

#include <QWidget>

namespace Ui {
class manage;
}

class manage : public QWidget
{
    Q_OBJECT

public:
    explicit manage(QWidget *parent = nullptr);
    ~manage();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::manage *ui;
};

#endif // MANAGE_H
