#include "pch.h"
#include<iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter your name:";
	string name;//объявление переменной типа string
	cin >> name;//ввод имени 
	cout << "Hello " << name << endl;//приветствие 
	system("pause");
	return 0;
}
