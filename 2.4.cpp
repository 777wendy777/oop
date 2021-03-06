#include "pch.h"
#include <iostream>
#include <cmath>
#include <clocale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, x, y, t;

	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение x: ";
	cin >> x;

	if (a <= x)
	{
		y = a + log(x + a);
	}
	else
	{
		y = sqrt(sin(a * x));
	}

	if (a > y)
	{
		t = y / (a - x);
	}
	else
	{
		if (a == y)
		{
			t = y / (a - x) + (a + x) / (y * y);
		}
		else
		{
			t = tan(a * x) + cos(2 * a * y);
		}
	}

	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}
