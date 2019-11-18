#ifndef CHEESE_H
#define CHEESE_H

#include <QWidget>

namespace Ui {
class cheese;
}

class cheese : public QWidget
{
    Q_OBJECT

public:
    explicit cheese(QWidget *parent = nullptr);
    ~cheese();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::cheese *ui;
};

#endif // CHEESE_H
