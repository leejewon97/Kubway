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

private:
    Ui::accounts *ui;
};

#endif // ACCOUNTS_H
