#ifndef MANAGE_BACK_H
#define MANAGE_BACK_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QFileSystemWatcher>
#include <QFileDialog>
#include <QApplication>

using namespace std;

#define MAX_NAME 50
#define TRUE 1

typedef struct node_ *NodePointer2;
typedef struct node_ {
    int price15;
    int price30;
    char name[MAX_NAME];
    char rcsauce1[MAX_NAME];
    char rcsauce2[MAX_NAME];
    NodePointer2 link;
} Node2;

namespace Ui {
class manage_back;
}

class manage_back : public QWidget
{
    Q_OBJECT

public:
    explicit manage_back(QWidget *parent = nullptr);
    ~manage_back();

    NodePointer2 head = NULL;

    void save_Node(NodePointer2 *temp, int bool_del)
    {
        QString  fileName = QApplication::applicationDirPath() + "/savepop.txt";
        NodePointer2 cur = *temp;
        //qDebug() << fileName;
        QFile file(fileName);
        QFile file1(fileName);
        int num;
        QString num_str;

        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            qDebug() << "not open file";
            return;
        }
        QTextStream stream(&file);
        num_str = stream.readLine();
        num = num_str.toInt();

        file.close();

        if(!file1.open(QIODevice::WriteOnly | QIODevice::Text)){
            qDebug() << "not open file";
            return;
        }
        QTextStream stream1(&file1);

        if (num == 0)
        {
            stream1 << "0" << "\n";
            file.close();
            return;
        }
        else
        {
            num++;
            if (bool_del != 1){
                num = bool_del;
            }
            num_str = QVariant(num).toString();

            stream1 << num_str + "\n";
            for (int i = 0; i < num; i++)
            {
                QString _name = cur->name;
                QString _price15 = QVariant(cur->price15).toString();
                QString _price30 = QVariant(cur->price30).toString();
                QString _rcsauce1 = cur->rcsauce1;
                QString _rcsauce2 = cur->rcsauce2;
                stream1 << _name + " " + _price15 + " "+ _price30 + " "+ _rcsauce1 + " "+ _rcsauce2 + "\n";

                cur = cur->link;
           }
        }
        head = NULL;

        file1.close();

    }

    bool delete_Node(NodePointer2 *node, char* findname)
    {
        QString  fileName = QApplication::applicationDirPath() + "/savepop.txt";
        NodePointer2 temp = *node;
        //qDebug() << fileName;
        QFile file(fileName);
        int num;
        bool ret =true;
        QString num_str;
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            qDebug() << "not open file";
        }
        QTextStream stream(&file);
        num_str = stream.readLine();
        num = num_str.toInt();

        NodePointer2 item;
        for (; temp != NULL; temp = temp->link)
        {
            if (strcmp(temp->name, findname) == 0)
            {
                if (*node == temp)
                {
                    *node = NULL;
                    free(temp);
                    num--;
                    break;
                }
                else
                {
                    item->link = temp->link;
                    free(temp);
                    num--;
                    break;
                }
            }
            item = temp;
        }
        if (temp == NULL)
        {
            ret = false;
        }
        file.close();

        save_Node(&head, num);

        return ret;
    }


    bool find_Node(NodePointer2 temp, char* arg)
    {
        char findname[MAX_NAME];
        bool ret = true;


        strcpy(findname, arg);

        for (; temp != NULL; temp = temp->link)
        {

            if (strcmp(temp->name, findname) == 0)
            {

                ret = true;
                break;
            }

        }

        return ret;
    }

    void make_Node(NodePointer2 *temp, int _price15, int _price30, char* _name, char* _rcsauce1, char* _rcsauce2)
    {
        NodePointer2 item;
        NodePointer2 cur = *temp;
        item = (NodePointer2)malloc(sizeof(Node2));
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

    void read_Node(NodePointer2 *temp)
    {
    //QString fileName = QFileDialog::getOpenFileName(this, "Open file", "../kubway", "text (*.txt)");
        QString  fileName = QApplication::applicationDirPath() + "/savepop.txt";
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
    Ui::manage_back *ui;
};


#endif // MANAGE_BACK_H
