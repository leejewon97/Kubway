#ifndef RECIPE_H
#define RECIPE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QDateTime>
#include "order_done.h"

#define UTC_TIME_ASIA_SEOUL  (9 * 60 * 60) //9h

namespace Ui {
class recipe;
}

class recipe : public QWidget
{
    Q_OBJECT



public:
    explicit recipe(QWidget *parent = nullptr);
    ~recipe();

    void setString(QString s);

    void setUi(QString s);

signals:
    void buttonPressed();

private slots:

    void closeAll();

    void on_pushButton_next_clicked();

    void on_pushButton_next_2_clicked();

private:
    Ui::recipe *ui;
    order_done *od = new order_done;
    QString str;
    QString time;
};

#endif // RECIPE_H
