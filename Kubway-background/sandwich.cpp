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
		this->bread = "��Ͽ�Ʈ";
	case 'b':
		this->bread = "��Ƽ";
	case 'c':
		this->bread = "��Ʈ";
	case 'd':
		this->bread = "�ĸ��� ��������";
	case 'e':
		this->bread = "ȭ��Ʈ";
	case 'f':
		this->bread = "�÷��극��";
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
		this->cheese = "�Ƹ޸�ĭ ġ��";
	case 'b':
		this->cheese = "������ ġ��";
	case 'c':
		this->cheese = "��¥���� ġ��";
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
		extra.append("�����");
	case 'b':
		extra.append("���׸���");
	case 'c':
		extra.append("����δ�");
	case 'd':
		extra.append("������");
	case 'e':
		extra.append("����ġ��");
	case 'f':
		extra.append("���ɷ�");
	case 'g':
		extra.append("�ƺ�ī��");
	case 'h':
		extra.append("����������");
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
