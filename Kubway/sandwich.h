#ifndef SANDWICH_H
#define SANDWICH_H

#include <QWidget>
#include <QPushButton>
#include "sandwich_classic.h"
#include "bread.h"

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
    void on_pushButton_clicked();

private:
    Ui::sandwich *ui;
    sandwich_classic sc;


};

#endif // SANDWICH_H
