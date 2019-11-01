#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnDineIn_clicked();

    void on_btnTakeOut_clicked();

    void on_btnKorean_clicked();

    void on_btnEnglish_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
