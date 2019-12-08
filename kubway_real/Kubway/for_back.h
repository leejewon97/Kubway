#ifndef FOR_BACK_H
#define FOR_BACK_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QFileSystemWatcher.h>
#include <QFileDialog>
#include <QApplication>


using namespace std;

#define MAX_NAME 30
#define TRUE 1

typedef struct node *NodePointer;
typedef struct node {
    int price;
    char name[MAX_NAME];
    char rcsauce1[MAX_NAME];
    char rcsauce2[MAX_NAME];
    NodePointer link;
} Node;

namespace Ui {
class for_back;
}

class for_back : public QWidget
{
    Q_OBJECT

public:
    explicit for_back(QWidget *parent = nullptr);
    ~for_back();

    NodePointer head = NULL;

    char *find_Node(NodePointer temp, char* arg)
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

        return ret;
    }

    void make_Node(NodePointer *temp, int _age, char* _name, char* _rcsauce1, char* _rcsauce2)
    {
        NodePointer item;
        NodePointer cur = *temp;
        item = (NodePointer)malloc(sizeof(Node));
        item->price = _age;

        strcpy(item->name, _name);
        strcpy(item->rcsauce1, _rcsauce1);
        strcpy(item->rcsauce2, _rcsauce2);

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

    void read_Node(NodePointer *temp)
    {
        //QString fileName = QFileDialog::getOpenFileName(this, "Open file", "../kubway", "text (*.txt)");
        QString  fileName = QApplication::applicationDirPath() + "/savepop.txt";
        qDebug() << fileName;
        QFile file(fileName);
        int num;

        //FILE *fl;
        int i;
        int save_price;

        char _name[30] = {0,};
        char _rcsauce1[30] = {0,};
        char _rcsauce2[30] = {0,};

        QString save_name;
        QString save_rcsauce1;
        QString save_rcsauce2;

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
                 save_rcsauce1 = arr.value(2);
                 save_rcsauce2 = arr.value(3);

                 qsnprintf(_name, sizeof(_name), "%s", save_name.toUtf8().constData());
                 qsnprintf(_rcsauce1, sizeof(_name), "%s", save_rcsauce1.toUtf8().constData());
                 qsnprintf(_rcsauce2, sizeof(_name), "%s", save_rcsauce2.toUtf8().constData());

                 make_Node(temp, save_price, _name, _rcsauce1, _rcsauce2);
             }
         }

         file.close();
    }

private:
    Ui::for_back *ui;
};

#endif // FOR_BACK_H
