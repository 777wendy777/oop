#include "pch.h"
#include <iostream>
#include <string>
#include "windows.h"
#include <cstdio>
using namespace std;

class library { //объявление класса 
public:
	string style;//объявление переменных 
	string author;
	string title;
	int year;
	int price;

	string *members;//объявление переменных 

	int n;

	void set()//ввод
	{
		cout << "Введите количество книг:" << endl;
		cin >> n;
		members = new string[n];

		for (int i = 0; i < n; i++)
		{
			cout << "Введите жанр_ФИО_название_год книги №" << i + 1 << ":" << endl;
			cin >> members[i];

		}
	}
	void show()//вывод
	{
		cout << endl << "-----------------------------------------------------" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "книга №" << i + 1 << ":" << members[i] << endl;

		}

	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	library x;

	x.set();
	x.show();

	system("pause");
	return 0;
}