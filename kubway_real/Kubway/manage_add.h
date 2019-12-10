#ifndef MANAGE_ADD_H
#define MANAGE_ADD_H

#include <QDialog>
#include "manage_back.h"
#include "sandwich_new.h"

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
    manage_back mb;

    sandwich_new sn;


};

#endif // MANAGE_ADD_H
