#ifndef SANDWICH_H
#define SANDWICH_H

#include <QWidget>

namespace Ui {
class sandwich;
}

class sandwich : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich(QWidget *parent = nullptr);
    ~sandwich();

private:
    Ui::sandwich *ui;
};

#endif // SANDWICH_H
