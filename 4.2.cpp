#include "pch.h"
#include <iostream>
#include "windows.h"

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	int a;
	int* arr = new int[12];//объявляем массив
	cout << "Массив 1:" << endl;
	for (int i = 0; i < 12; i++)//заполняем массив
	{
		arr[i] = rand() % 100;
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "Массив 2:" << endl;
	for (int i = 0; i < 11; i += 2)//меняем четные и нечетные яйчейки 
	{
		a = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = a;
	}
	for (int i = 0; i < 12; i++)//вывод массива
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
