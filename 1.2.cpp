#include "pch.h"
#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;//объявления переменных типа double
	cout << "Введите первое число: ";
	cin >> a;

	cout << "Введите второе число: ";
	cin >> b;

	double c = a + b;//вычисления 
	double x = a - b;
	double p = a * b;
	double r = a / b;

	cout << "Сумма чисел = " << c << endl;//вывод результатов 
	cout << "Разность чисел = " << x << endl;
	cout << "Произведение чисел = " << p << endl;
	cout << "Разность чисел = " << r << endl;
	return 0;

}
