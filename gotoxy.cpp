#include <iostream>
#include <Windows.h>

using namespace std;
void gotoxy(int x, int y);

int main() {
	system("mode con cols=50 lines=30 ");

	gotoxy(22,10);
	cout << "Kubway";
	gotoxy(18, 15);
	cout << "> 메뉴 선택";

	gotoxy(0, 20);
	cout << "--------------------------------------------------";
	return 0;
}
void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}