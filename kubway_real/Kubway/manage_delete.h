#ifndef MANAGE_DELETE_H
#define MANAGE_DELETE_H

#include <QDialog>

namespace Ui {
class manage_delete;
}

class manage_delete : public QDialog
{
    Q_OBJECT

public:
    explicit manage_delete(QWidget *parent = nullptr);
    ~manage_delete();

private slots:
    void on_pushButton_delete_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::manage_delete *ui;
};

#endif // MANAGE_DELETE_H
