#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <QWidget>

namespace Ui {
class vegetable;
}

class vegetable : public QWidget
{
    Q_OBJECT

public:
    explicit vegetable(QWidget *parent = nullptr);
    ~vegetable();

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

private:
    Ui::vegetable *ui;
    bool flag[8];
};

#endif // VEGETABLE_H