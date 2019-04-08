#include "pch.h"
#include <iostream>
#include<string>
#include "windows.h"

using namespace std;

class Animal//абстратктный базовый класс животное 
{
protected:
	string name;
	int year;
public:
	void set()
	{
		cout << "Введите имя:";
		cin >> name;
		cout << "Введите возраст:";
		cin >> year;
	}
	void out()
	{
		cout << "Я " << name << " мне " << year << endl;
	}
	virtual void golos() = 0;
};

class Cat : public Animal //производнфый класс кошка
{
public:
	void golos()
	{
		cout << "МЯУ!!!" << endl;
	}

};

class Dog : public Animal//производнфый класс собака 
{
public:
	void golos()
	{
		cout << "ГАВ ГАВ ГАВ!!!" << endl;
	}

};
class Parrot : public Animal//производнфый класс попугай 
{
public:
	void golos()
	{
		cout << "ПРРРИВЕТ!!!" << endl;
	}

};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	Cat a;
	cout << "кот" << endl;
	a.set();
	a.out();
	a.golos();
	cout << endl;

	Dog b;
	cout << "собака" << endl;
	b.set();
	b.out();
	b.golos();
	cout << endl;

	Parrot c;
	cout << "попугай" << endl;
	c.set();
	c.out();
	c.golos();

	system("pause");
	return 0;
}