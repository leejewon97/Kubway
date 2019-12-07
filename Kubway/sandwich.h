#ifndef SANDWICH_H
#define SANDWICH_H

#include <QWidget>
#include <QPushButton>
#include "sandwich_classic.h"
#include "sandwich_fresh.h"
#include "sandwich_new.h"
#include "sandwich_premium.h"

namespace Ui {
class sandwich;
}

class sandwich : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich(QWidget *parent = nullptr);
    ~sandwich();   

private slots:

    void on_classic_btn_clicked();

    void on_fresh_btn_clicked();

    void on_new_btn_clicked();

    void on_premium_btn_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::sandwich *ui;
    sandwich_classic sc;
    sandwich_fresh sf;
    sandwich_new sn;
    sandwich_premium sp;


};

#endif // SANDWICH_H
