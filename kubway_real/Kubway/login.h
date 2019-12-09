#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <manage.h>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT
public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::login *ui;
    manage m;
};

#endif // LOGIN_H
