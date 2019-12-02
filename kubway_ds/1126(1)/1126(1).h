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
	char rcsauce1[MAX_NAME];
	char rcsauce2[MAX_NAME];
	NodePointer link;
} Node;

int cnt = 0;

void read_Node(NodePointer*);
void save_Node(NodePointer);
void make_Node(NodePointer *, int, char *, char *, char *);
void print_Node(NodePointer);
void find_Node(NodePointer);
void delete_Node(NodePointer*);

void read_Node(NodePointer *temp)
{
	FILE *file;
	FILE *fl;

	NodePointer item = *temp;

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

void save_Node(NodePointer *temp)
{
	FILE * file = fopen("savepop.txt", "wt");
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
			fprintf(file, "%s %d %s %s\n", cur->name, cur->price, cur->rcsauce1, cur->rcsauce2);
			cur = cur->link;
		}
	}
	fclose(file);
}

void make_Node(NodePointer *temp, int _age, char *_name, char *_rcsauce1, char *_rcsauce2)
{
	int i;
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

void print_Node(NodePointer temp)
{
	for (; temp != NULL; temp = temp->link)
	{
		cout << "종류 : " << temp->name;
		cout << " 가격 : " << temp->price << "원";
		cout << " 추천 소스 : " << temp->rcsauce1 << " " << temp->rcsauce2 << endl;
	}
}

void find_Node(NodePointer temp)
{
	char findname[30];
	cout << "찾을 샌드위치 입력 : ";
	cin >> findname;

	for (; temp != NULL; temp = temp->link)
	{
		if (strcmp(temp->name, findname) == 0)
		{
			cout << "종류 : " << temp->name;
			cout << " 가격 : " << temp->price << "원";
			cout << " 추천 소스 : " << temp->rcsauce1 << " " << temp->rcsauce2 << endl;
			break;
		}
	}
	if (temp == NULL)
	{
		cout << "찾는 샌드위치가 없습니다." << endl;
	}
}

void delete_Node(NodePointer *node)
{
	char findname[30];
	NodePointer temp = *node;
	NodePointer item;
	cout << "지울 샌드위치 입력 : ";
	cin >> findname;
	for (; temp != NULL; temp = temp->link)
	{
		if (strcmp(temp->name, findname) == 0)
		{
			if (*node == temp)
			{
				cout << "종류 : " << temp->name;
				cout << " 가격 : " << temp->price;
				cout << " 추천 소스 : " << temp->rcsauce1 << temp->rcsauce2 << endl;
				*node = NULL;
				free(temp);
				cnt--;
				break;
			}
			else
			{
				cout << "종류 : " << temp->name;
				cout << " 가격 : " << temp->price;
				cout << " 추천 소스 : " << temp->rcsauce1 << temp->rcsauce2 << endl;
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
		cout << "찾는 샌드위치가 없습니다." << endl;
	}
}
