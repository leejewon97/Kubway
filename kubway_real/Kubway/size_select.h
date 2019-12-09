#ifndef SIZE_SELECT_H
#define SIZE_SELECT_H

#include <QWidget>
#include "sandwich.h"

namespace Ui {
class size_select;
}

class size_select : public QWidget
{
    Q_OBJECT

public:
    explicit size_select(QWidget *parent = nullptr);

    ~size_select();

    void setStringLength(int x);

    QString getString();

    void setString(QString s);


signals:
    void buttonPressed();

private slots:

    void on_pushButton_15cm_2_clicked();

    void on_pushButton_30cm_2_clicked();

    void on_pushButton_back_2_clicked();

    void on_pushButton_home_2_clicked();

    void closeAll();

private:
    Ui::size_select *ui;
    sandwich *s = new sandwich();
    QString str;
};

#endif // SIZE_SELECT_H
