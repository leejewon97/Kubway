#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QFileSystemWatcher>
#include <QFileDialog>
#include <QApplication>

namespace Ui {
class accounts;
}

class accounts : public QWidget
{
    Q_OBJECT


public:
    explicit accounts(QWidget *parent = nullptr);
    ~accounts();

    void text_set();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::accounts *ui;
};

#endif // ACCOUNTS_H
