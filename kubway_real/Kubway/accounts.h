#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <QWidget>

namespace Ui {
class accounts;
}

class accounts : public QWidget
{
    Q_OBJECT

public:
    explicit accounts(QWidget *parent = nullptr);
    ~accounts();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::accounts *ui;
};

#endif // ACCOUNTS_H
