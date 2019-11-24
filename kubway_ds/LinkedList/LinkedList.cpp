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
void find_Node(NodePointer);
void delete_Node(NodePointer*);

void read_Node(NodePointer *temp)
{
	FILE *file;
	FILE *fl;

	NodePointer item = *temp;

	int num, i;
	int save_age;
	char save_name[30];

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
		fscanf(file, "%s  %d", save_name, &save_age);
		make_Node(temp, save_age, save_name);
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
		cout << "���� : " << temp->name;
		cout << "���� : " << temp->price << endl;
	}
}

void find_Node(NodePointer temp)
{
	char findname[30];
	cout << "ã�� ������ġ �Է� : ";
	cin >> findname;

	for (; temp != NULL; temp = temp->link)
	{
		if (strcmp(temp->name, findname) == 0)
		{
			cout << "���� : " << temp->name;
			cout << "���� : " << temp->price << endl;
			break;
		}
	}
	if (temp == NULL)
	{
		cout << "ã�� ������ġ�� �����ϴ�." << endl;
	}
}

void delete_Node(NodePointer *node)
{
	char findname[30];
	NodePointer temp = *node;
	NodePointer item;
	cout << "���� ������ġ �Է� : ";
	cin >> findname;
	for (; temp != NULL; temp = temp->link)
	{
		if (strcmp(temp->name, findname) == 0)
		{
			if (*node == temp)
			{
				cout << "���� : " << temp->name;
				cout << "���� : " << temp->price << endl;
				*node = NULL;
				free(temp);
				cnt--;
				break;
			}
			else
			{
				cout << "���� : " << temp->name;
				cout << "���� : " << temp->price << endl;
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
		cout << "ã�� ������ġ�� �����ϴ�." << endl;
	}
}

int main(void)
{
	int num;
	int price;
	char name[MAX_NAME];

	NodePointer head = NULL;
	NodePointer temp = head;

	read_Node(&head);

	while (TRUE)
	{
		cout << "1) �Է�" << endl;
		cout << "2) ���" << endl;
		cout << "3) �˻�" << endl;
		cout << "4) ����" << endl;
		cout << "5) ����" << endl;

		cin >> num;

		switch (num)
		{
		case 1:
			cout << "������ġ �̸� �Է� : ";
			cin >> name;
			cout << "������ġ ���� �Է� : ";
			cin >> price;
			make_Node(&head, price, name);
			break;
		case 2:
			print_Node(head);
			break;
		case 3:
			find_Node(head);
			break;
		case 4:
			delete_Node(&head);
			break;
		case 5:
			save_Node(&head);
			return 0;
			break;
		}
	}
	return 0;
}