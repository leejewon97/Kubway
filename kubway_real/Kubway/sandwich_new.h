#ifndef sandwich_new_H
#define sandwich_new_H

#include <QWidget>
#include <QPushButton>
#include "bread.h"
#include "for_back.h"

namespace Ui {
class sandwich_new;
}

class sandwich_new : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich_new(QWidget *parent = nullptr);
    ~sandwich_new();

    void setString(QString s);

    QString getString();

    void setStringLength(int s);

    void setUi(QString s);

signals:
    void buttonPressed();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void disableButtons(QPushButton* exBtn);

    void enableButtons();

    void on_pushButton_next_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_home_clicked();

    void closeAll();

private:
    Ui::sandwich_new *ui;
    bread *b = new bread;
    bool btnFlag;
    QString str;
    QPushButton* buttons[6];
    for_back fb;
    int strlen;
};

#endif // sandwich_new_H
