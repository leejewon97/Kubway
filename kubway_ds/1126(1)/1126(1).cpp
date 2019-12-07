#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdio>
#include <string>
#include "1126(1).h"

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
		cout << "1) 입력" << endl;
		cout << "2) 출력" << endl;
		cout << "3) 검색" << endl;
		cout << "4) 삭제" << endl;
		cout << "5) 종료" << endl;

		cin >> num;

		switch (num)
		{
		case 1:
			cout << "샌드위치 이름 입력 : ";
			cin >> name;
			cout << "샌드위치 가격 입력 : ";
			cin >> price;
			cout << "추천 소스 입력 : ";
			cin >> rcsauce1;
			cout << "추천 소스 입력 : ";
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