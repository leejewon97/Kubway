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

void step1() { //KUBWAY 기본 화면
	cout << "매장에서 식사(a), 테이크 아웃(b) : ";
	cin >> selection;
}

void step2() { //메뉴 선택 화면

}

void step3(menu m) { //빵 선택 화면
	cout << "빵 선택(허니오트(a), 하티(b), 위트(c), 파마산 오레가노(d), 화이트(e), 플랫브레드(f)) : ";
	cin >> breadSelection;
	m.setBread(breadSelection);
}

void step4(menu m) { //치즈 선택 화면
	cout << "치즈 선택(아메리칸 치즈(a), 슈레드 치즈(b), 모짜렐라 치즈(c)) : ";
	cin >> cheeseSelection;
	m.setCheese(cheeseSelection);
}

void step5(menu m) { //추가 선택 화면
	int i;
	for (i = 0; i < 8; i++) {
		cout << "추가 선택(더블업(a), 에그마요(b), 페페로니(c), 베이컨(d), 더블치즈(e), 오믈렛(f), 아보카도(g), 베이컨비츠(h), 선택X(0)) : ";
		cin >> extraSelection;
		if (extraSelection == 0) {
			break;
		}
		m.setExtra(extraSelection);
	}
}

void step6(menu m) { //야채 선택 화면
	cout << "야채 선택(기본 : 양상추(a), 토마토(b), 오이(c), 피망(d), 양파(e)), 추가 : (피클(f), 올리브(g), 할라피뇨(h))";
}

void step7(menu m) { //소스 선택 화면

}

void calculateOrder() {
	int index = 0;
	int total = 0;
	int amount = 0;

}

int main() {

	
}