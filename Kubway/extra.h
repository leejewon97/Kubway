#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdio>
#include <string>

using namespace std;

#define MAX_NAME 30
#define TRUE 1

typedef struct node *NodePointer;
typedef struct node {
	int price;
	char name[MAX_NAME];
	NodePointer link;
} Node;

int cnt = 0;

void read_Node(NodePointer*);
void save_Node(NodePointer);
void make_Node(NodePointer *, int, char *);
void print_Node(NodePointer);
char *find_Node(NodePointer);
void delete_Node(NodePointer*);

void read_Node(NodePointer *temp)
{
	FILE *file;
	FILE *fl;

	NodePointer item = *temp;

	int num, i;
	int save_price;
	char save_name[30];

	if ((file = fopen("extra.txt", "r")) == NULL)
	{
		fl = fopen("extra.txt", "w+");
		fprintf(fl, "0");
		fclose(fl);
		return;
	}
	fscanf(file, "%d", &num);
	if (num == 0)
		return;
	for (i = 0; i < num; i++)
	{
		fscanf(file, "%s  %d", save_name, &save_price);
		make_Node(temp, save_price, save_name);
	}
	fclose(file);
}

void save_Node(NodePointer *temp)
{
	FILE * file = fopen("extra.txt", "wt");
	NodePointer cur = *temp;
	int i;
	if (cnt == 0)
	{
		fprintf(file, "0");
		fclose(file);
		return;
	}

	else
	{
		fprintf(file, "%d\n", cnt);
		for (i = 0; i < cnt; i++)
		{
			fprintf(file, "%s %d\n", cur->name, cur->price);
			cur = cur->link;
		}
	}
	fclose(file);
}

void make_Node(NodePointer *temp, int _age, char *_name)
{
	int i;
	NodePointer item;
	NodePointer cur = *temp;
	item = (NodePointer)malloc(sizeof(Node));
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
	cnt++;
}

void print_Node(NodePointer temp)
{
	for (; temp != NULL; temp = temp->link)
	{
		cout << "종류 : " << temp->name;
		cout << " 가격 : " << temp->price << "원" << endl;
	}
}

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
			sprintf(pvalue, "\t%d\n", temp->price);
			ret = temp->name;
			strcat(ret, pvalue);
			break;
		}
	}
	if (temp == NULL)
	{
		cout << "찾는 추가메뉴가 없습니다." << endl;
	}
	return ret;
}

void delete_Node(NodePointer *node)
{
	char findname[30];
	NodePointer temp = *node;
	NodePointer item;
	cout << "지울 추가메뉴 입력 : ";
	cin >> findname;
	for (; temp != NULL; temp = temp->link)
	{
		if (strcmp(temp->name, findname) == 0)
		{
			if (*node == temp)
			{
				cout << "종류 : " << temp->name;
				cout << " 가격 : " << temp->price << endl;
				*node = NULL;
				free(temp);
				cnt--;
				break;
			}
			else
			{
				cout << "종류 : " << temp->name;
				cout << " 가격 : " << temp->price << endl;
				item->link = temp->link;
				free(temp);
				cnt--;
				break;
			}
		}
		item = temp;
	}
	if (temp == NULL)
	{
		cout << "찾는 추가메뉴가 없습니다." << endl;
	}
}
