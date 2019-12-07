#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <QWidget>
#include "sauce.h"

namespace Ui {
class vegetable;
}

class vegetable : public QWidget
{
    Q_OBJECT

public:
    explicit vegetable(QWidget *parent = nullptr);
    ~vegetable();

    void setString(QString s);

    QString getString();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_next_clicked();

private:
    Ui::vegetable *ui;
    bool btnFlag[8];
    QString str;
    sauce sa;
    int str_length=0;
};

#endif // VEGETABLE_H
