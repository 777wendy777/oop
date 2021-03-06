#include "pch.h"
#include <iostream>
#include <cmath>
#include <clocale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, y, t;

	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;

	if (a <= b)
	{
		y = (a - b) * (a + b) / ((a + b) * (a * a - a * b + b * b));
	}
	else
	{
		y = a + pow(log(b), 2);
	}

	if (y == b)
	{
		t = (2 * y + sqrt(y * y - a)) / (2 * b - sqrt(a * a - y));
	}
	else
	{
		if (y < b)
		{
			t = sin(y) * sin(y) + 1 / tan(a - b);
		}
		else
		{
			t = cbrt(y * sin(a)) + 1 / sqrt(y * cos(b));
		}
	}

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}
