#ifndef MANAGE_ADD_H
#define MANAGE_ADD_H

#include <QDialog>

namespace Ui {
class manage_add;
}

class manage_add : public QDialog
{
    Q_OBJECT

public:
    explicit manage_add(QWidget *parent = nullptr);
    ~manage_add();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::manage_add *ui;
};

#endif // MANAGE_ADD_H
