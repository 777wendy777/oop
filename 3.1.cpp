#include "pch.h"
#include <iostream>
#include <string>
#include "windows.h"
#include <cstdio>
using namespace std;

class book { //объявление класса 
public:
	string style;//объявление переменных 
	string author;
	string title;
	int year;
	int price;

	void set()//ввод
	{
		cout << "Введите жанр:";
		getline(cin, style);
		cout << "Введите имя и фамилию автора:";
		getline(cin, author);
		cout << "Введите название:";
		getline(cin, title);
		cout << "Введите год:";
		cin >> year;
		cout << "Введите цену:";
		cin >> price;
		cout << "---------------------------------------" << endl;
	}
	void show()//вывод
	{
		cout << "Жанр:" << style << endl;
		cout << "Автор:" << author << endl;
		cout << "Название:" << title << endl;
		cout << "Год:" << year << endl;
		cout << "Цена:" << price << endl;
	}


};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	book x;

	x.set();
	x.show();

	system("pause");
	return 0;
}
