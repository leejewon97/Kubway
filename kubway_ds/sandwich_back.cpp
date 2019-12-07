#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdio>
#include <string>
#include "sandwich_back.h"

using namespace std;

int main(void)
{
	int num;
	int price;
	char name[MAX_NAME];
	char rcsauce1[MAX_NAME];
	char rcsauce2[MAX_NAME];

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
			cout << "��õ �ҽ� �Է� : ";
			cin >> rcsauce1;
			cout << "��õ �ҽ� �Է� : ";
			cin >> rcsauce2;
			make_Node(&head, price, name, rcsauce1, rcsauce2);
			save_Node(&head);
			break;
		case 2:
			print_Node(head);
			break;
		case 3:
			cout << find_Node(head) << endl;
			break;
		case 4:
			delete_Node(&head);
			save_Node(&head);
			break;
		case 5:
			return 0;
			break;
		}
	}
	return 0;
}