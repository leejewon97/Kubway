#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "sandwich.h"

using namespace std;

char selection;
char breadSelection;
char cheeseSelection;
char extraSelection;
char vegetableSelection;
char sauceSelection;

void step1() { //KUBWAY �⺻ ȭ��
	cout << "���忡�� �Ļ�(a), ����ũ �ƿ�(b) : ";
	cin >> selection;
}

void step2() { //�޴� ���� ȭ��

}

void step3(menu m) { //�� ���� ȭ��
	cout << "�� ����(��Ͽ�Ʈ(a), ��Ƽ(b), ��Ʈ(c), �ĸ��� ��������(d), ȭ��Ʈ(e), �÷��극��(f)) : ";
	cin >> breadSelection;
	m.setBread(breadSelection);
}

void step4(menu m) { //ġ�� ���� ȭ��
	cout << "ġ�� ����(�Ƹ޸�ĭ ġ��(a), ������ ġ��(b), ��¥���� ġ��(c)) : ";
	cin >> cheeseSelection;
	m.setCheese(cheeseSelection);
}

void step5(menu m) { //�߰� ���� ȭ��
	int i;
	for (i = 0; i < 8; i++) {
		cout << "�߰� ����(�����(a), ���׸���(b), ����δ�(c), ������(d), ����ġ��(e), ���ɷ�(f), �ƺ�ī��(g), ����������(h), ����X(0)) : ";
		cin >> extraSelection;
		if (extraSelection == 0) {
			break;
		}
		m.setExtra(extraSelection);
	}
}

void step6(menu m) { //��ä ���� ȭ��
	cout << "��ä ����(�⺻ : �����(a), �丶��(b), ����(c), �Ǹ�(d), ����(e)), �߰� : (��Ŭ(f), �ø���(g), �Ҷ��Ǵ�(h))";
}

void step7(menu m) { //�ҽ� ���� ȭ��

}

void calculateOrder() {
	int index = 0;
	int total = 0;
	int amount = 0;

}

int main() {

	
}