#include "pch.h"
#include <iostream>
#include "windows.h"
#include <ctime>
using namespace std;

void fill(int **arr, int n, int m) //заполнения массива рандомными числами
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
		{
			arr[i][j] = rand() % 41 + 10;
		}
	}
}

void print(int **arr, int n, int m) //вывод массива 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	srand(time(NULL));
	
	int m, n;
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество столбцов: ";
	cin >> m;

	int **arr = new int*[n];//создаем двумерный динамический массив
	for (int i = 0; i < n; i++) 
	{
		arr[i] = new int[m];
	}

	fill(arr, n, m);//вызываем функции 
	print(arr, n, m);

	for (int i = 0; i < n; i++) //очищаем память 
	{
		delete[] arr[i];
	}

	system("pause");
	return 0;
}
