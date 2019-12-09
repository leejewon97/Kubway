#ifndef FOR_BACK_H
#define FOR_BACK_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QFileSystemWatcher.h>
#include <QFileDialog>
#include <QApplication>


using namespace std;

#define MAX_NAME 50
#define TRUE 1

typedef struct node *NodePointer;
typedef struct node {
    int price15;
    int price30;
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

    char *find_Node(NodePointer temp, char* arg, int size)
    {
        char findname[MAX_NAME];
        char pvalue[MAX_NAME];
        char *ret;

        strcpy(findname, arg);

        for (; temp != NULL; temp = temp->link)
        {
            if (strcmp(temp->name, findname) == 0)
            {
                if (size == 15) {
                sprintf(pvalue, "\t%d 원\n", temp->price15);
                } else if (size == 30){
                sprintf(pvalue, "\t%d 원\n", temp->price30);
                }
                ret = temp->name;
                strcat(ret, pvalue);
                break;
            }
        }

        qDebug() << ret;
        return ret;
    }

    char *find_Rcsauce1(NodePointer temp, char* arg)
       {
           char findname[MAX_NAME];
           char *retSauce;

           strcpy(findname, arg);

           for (; temp != NULL; temp = temp->link)
           {
               if (strcmp(temp->name, findname) == 0)
               {
                   retSauce = temp->rcsauce1;
                   break;
               }
           }
           return retSauce;
       }

       char *find_Rcsauce2(NodePointer temp, char* arg)
       {
           char findname[MAX_NAME];
           char *retSauce;

           strcpy(findname, arg);

           for (; temp != NULL; temp = temp->link)
           {
               if (strcmp(temp->name, findname) == 0)
               {
                   retSauce = temp->rcsauce2;
                   break;
               }
           }
           return retSauce;
       }

    void make_Node(NodePointer *temp, int _price15, int _price30, char* _name, char* _rcsauce1, char* _rcsauce2)
    {
        NodePointer item;
        NodePointer cur = *temp;
        item = (NodePointer)malloc(sizeof(Node));
        item->price15 = _price15;
        item->price30 = _price30;

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
        int save_price15;
        int save_price30;

        char _name[MAX_NAME] = {0,};
        char _rcsauce1[MAX_NAME] = {0,};
        char _rcsauce2[MAX_NAME] = {0,};

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
                 //fscanf(file, "%s  %d  %d  %s  %s", save_name, &save_price15, &save_price30, save_rcsauce1, save_rcsauce2);
                 //make_Node(temp, save_price15, save_price30, save_name, save_rcsauce1, save_rcsauce2);
                 QString tmp = stream.readLine();
                 QStringList arr = tmp.split(' ');
                 save_name = arr.value(0);
                 save_price15 = arr.value(1).toInt();
                 save_price30 = arr.value(2).toInt();
                 save_rcsauce1 = arr.value(3);
                 save_rcsauce2 = arr.value(4);

                 qsnprintf(_name, sizeof(_name), "%s", save_name.toUtf8().constData());
                 qsnprintf(_rcsauce1, sizeof(_name), "%s", save_rcsauce1.toUtf8().constData());
                 qsnprintf(_rcsauce2, sizeof(_name), "%s", save_rcsauce2.toUtf8().constData());

                 make_Node(temp, save_price15, save_price30, _name, _rcsauce1, _rcsauce2);
             }
         }

         file.close();
    }

private:
    Ui::for_back *ui;
};

#endif // FOR_BACK_H
