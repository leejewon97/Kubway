#ifndef SANDWITCH_H
#define SANDWITCH_H

#include <QWidget>
#include "sandwitch_classic.h"
#include "sandwitch_fresh.h"
#include "sandwitch_new.h"
#include "sandwitch_premium.h"

namespace Ui {
class sandwitch;
}

class sandwitch : public QWidget
{
    Q_OBJECT

public:
    explicit sandwitch(QWidget *parent = nullptr);
    ~sandwitch();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::sandwitch *ui;
    sandwitch_classic sc;
    sandwitch_fresh sf;
    sandwitch_new sn;
    sandwitch_premium sp;
};

#endif // SANDWITCH_H
