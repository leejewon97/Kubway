#ifndef sandwich_classic_H
#define sandwich_classic_H

#include <QWidget>
#include <QPushButton>
#include "bread.h"
#include <QDebug>

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
class sandwich_classic;
}

class sandwich_classic : public QWidget
{
    Q_OBJECT

public:
    explicit sandwich_classic(QWidget *parent = nullptr);
    ~sandwich_classic();

    void setString(QString s);

    QString getString();

    void make_Node(NodePointer *temp, int _age, char *_name, char *_rcsauce1, char *_rcsauce2)
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
        cnt++;
    }

    void read_Node(NodePointer *temp)
    {
        FILE *file;
        FILE *fl;

        int num, i;
        int save_price;
        char save_name[30];
        char save_rcsauce1[30];
        char save_rcsauce2[30];

        if ((file = fopen("savepop.txt", "r")) == NULL)
        {
            fl = fopen("savepop.txt", "w+");
            fprintf(fl, "0");
            fclose(fl);
            return;
        }
        fscanf(file, "%d", &num);
        if (num == 0)
            return;
        for (i = 0; i < num; i++)
        {
            fscanf(file, "%s  %d  %s  %s", save_name, &save_price, save_rcsauce1, save_rcsauce2);
            make_Node(temp, save_price, save_name, save_rcsauce1, save_rcsauce2);
        }
        fclose(file);
    }

    char* find_Node(NodePointer temp, string arg)
    {
        char findname[30];
        char pvalue[30];
        char *ret;

        strcpy(findname, arg.c_str());

        for (; temp != NULL; temp = temp->link)
        {
            if (strcmp(temp->name, findname) == 0)
            {
                sprintf(pvalue, "\t%d\n", temp->price);
                ret = temp->name;
                strcat(ret, pvalue);
                break;
            }
        }

        return ret;
    }


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

private:
    Ui::sandwich_classic *ui;
    bread b;
    bool btnFlag;
    QString str;
    QPushButton* buttons[6];
    NodePointer head = NULL;
    int cnt = 0;
};

#endif // sandwich_classic_H
