#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdio>
#include <string>
#include "extra.h"

using namespace std;

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
		cout << "1) 입력" << endl;
		cout << "2) 출력" << endl;
		cout << "3) 검색" << endl;
		cout << "4) 삭제" << endl;
		cout << "5) 종료" << endl;

		cin >> num;

		switch (num)
		{
		case 1:
			cout << "추가메뉴 이름 입력 : ";
			cin >> name;
			cout << "추가메뉴 가격 입력 : ";
			cin >> price;
			make_Node(&head, price, name);
			save_Node(&head);
			break;
		case 2:
			print_Node(head);
			break;
		case 3:
			find_Node(head);
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