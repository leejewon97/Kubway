#include "sandwich.h"
#include <iostream>

using namespace std;

void menu::setMenu(char m)
{
	this->sand = m;
}

string menu::getMenu()
{
	return sand;
}

void menu::setBread(char b)
{
	switch (b) {
	case 'a':
		this->bread = "허니오트";
	case 'b':
		this->bread = "하티";
	case 'c':
		this->bread = "위트";
	case 'd':
		this->bread = "파마산 오레가노";
	case 'e':
		this->bread = "화이트";
	case 'f':
		this->bread = "플랫브레드";
	/*
	default:
	*/
	}
}

string menu::getBread()
{
	return bread;
}

void menu::setCheese(char c)
{
	switch (c) {
	case 'a':
		this->cheese = "아메리칸 치즈";
	case 'b':
		this->cheese = "슈레드 치즈";
	case 'c':
		this->cheese = "모짜렐라 치즈";
	/*
	default:
	*/
	}
}

string menu::getCheese()
{
	return cheese;
}

void menu::setExtra(char e)
{
	this->extra = "";
	switch (e) {
	case 'a':
		extra.append("더블업");
	case 'b':
		extra.append("에그마요");
	case 'c':
		extra.append("페페로니");
	case 'd':
		extra.append("베이컨");
	case 'e':
		extra.append("더블치즈");
	case 'f':
		extra.append("오믈렛");
	case 'g':
		extra.append("아보카도");
	case 'h':
		extra.append("베이컨비츠");
	}
}

string menu::getExtra()
{
	return extra;
}

void menu::setVegetable(char v)
{

}

string menu::getVegetable()
{
	return vegetable;
}

void menu::setSauce(char s)
{
}

string menu::getSauce()
{
	return sauce;
}

void menu::print(menu m)
{
	cout << m.getBread() << endl;;
	cout << m.getCheese() << endl;
	cout << m.getExtra() << endl;
	cout << m.getMenu() << endl;
	cout << m.getSauce() << endl;
}
