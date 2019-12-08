#ifndef TOPPING_FORBACK_H
#define TOPPING_FORBACK_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QFileSystemWatcher.h>
#include <QFileDialog>
#include <QApplication>


using namespace std;

#define MAX_NAME 30
#define TRUE 1

typedef struct tnode *TnodePointer;
typedef struct tnode {
    int price;
    char name[MAX_NAME];

    TnodePointer link;
} Tnode;

namespace Ui {
class topping_forback;
}

class topping_forback : public QWidget
{
    Q_OBJECT

public:
    explicit topping_forback(QWidget *parent = nullptr);
    ~topping_forback();

    TnodePointer head = NULL;

    char *find_Tnode(TnodePointer temp, char* arg)
    {
        char findname[30];
        char pvalue[30];
        char *ret;

        strcpy(findname, arg);

        for (; temp != NULL; temp = temp->link)
        {
            if (strcmp(temp->name, findname) == 0)
            {
                sprintf(pvalue, "\t%d 원\n", temp->price);
                ret = temp->name;
                strcat(ret, pvalue);
                break;
            }
        }

        qDebug() << ret;
        return ret;
    }

    void make_Tnode(TnodePointer *temp, int _age, char* _name)
    {
        TnodePointer item;
        TnodePointer cur = *temp;
        item = (TnodePointer)malloc(sizeof(Tnode));
        item->price = _age;

        strcpy(item->name, _name);

        item->link = NULL;
        if (*temp == NULL)
        {
            *temp = item;
        }

        else
        {
            for (; ; )
            {
                if ((cur)->link == NULL)
                {
                    (cur)->link = item;
                    break;
                }
                cur = cur->link;
            }
        }
    }

    void read_Tnode(TnodePointer *temp)
    {
        //QString fileName = QFileDialog::getOpenFileName(this, "Open file", "../kubway", "text (*.txt)");
        QString  fileName = QApplication::applicationDirPath() + "/savepop.txt";
        qDebug() << fileName;
        QFile file(fileName);
        int num;

        int i;
        int save_price;

        char _name[30] = {0,};

        QString save_name;

        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
             qDebug() << "not open file";
             return;
         } else {
             QTextStream stream(&file);
             num = stream.readLine().toInt();
             /*
             for (int i = 0; i < num; i++) {
                 qDebug() << stream.readLine();
             }
             */
             //qDebug() << stream.readAll();
             for (i = 0; i < num; i++)
             {
                 //fscanf(file, "%s  %d  %s  %s", save_name, &save_price, save_rcsauce1, save_rcsauce2);
                 //make_Node(temp, save_price, save_name, save_rcsauce1, save_rcsauce2);
                 QString tmp = stream.readLine();
                 QStringList arr = tmp.split(' ');
                 save_name = arr.value(0);
                 save_price = arr.value(1).toInt();

                 qsnprintf(_name, sizeof(_name), "%s", save_name.toUtf8().constData());

                 make_Tnode(temp, save_price, _name);
             }
         }

         file.close();
    }

private:
    Ui::topping_forback *ui;
};

#endif // TOPPING_FORBACK_H
