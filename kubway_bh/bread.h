#ifndef BREAD_H
#define BREAD_H

#include <QWidget>

namespace Ui {
class bread;
}

class bread : public QWidget
{
    Q_OBJECT

public:
    explicit bread(QWidget *parent = nullptr);
    ~bread();

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::bread *ui;
};

#endif // BREAD_H
