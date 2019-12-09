#ifndef MANAGE_H
#define MANAGE_H

#include <QWidget>

#include "sandwich_classic.h"
#include "sandwich_fresh.h"
#include "sandwich_new.h"
#include "sandwich_premium.h"

#include "manage_add.h"
#include "manage_delete.h"


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

    void on_pushButton_add_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::manage *ui;
    sandwich_classic *sc = new sandwich_classic;
    sandwich_fresh *sf = new sandwich_fresh;
    sandwich_new *sn = new sandwich_new;
    sandwich_premium *sp = new sandwich_premium;

    manage_add *ad = new manage_add;
    manage_delete *dl = new manage_delete;

};

#endif // MANAGE_H
