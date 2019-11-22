#ifndef SANDWITCH_H
#define SANDWITCH_H

#include <QWidget>

namespace Ui {
class sandwitch;
}

class sandwitch : public QWidget
{
    Q_OBJECT

public:
    explicit sandwitch(QWidget *parent = nullptr);
    ~sandwitch();

private:
    Ui::sandwitch *ui;
};

#endif // SANDWITCH_H
