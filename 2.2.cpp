#include "pch.h"
#include <iostream>
#include <cmath>
#include <clocale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, z, t;

	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;

	if (a < b)
	{
		z = sqrt(abs(a * a - b * b));
	}
	else
	{
		z = 1 - 2 * cos(a) * sin(b);
	}

	if (z < b)
	{
		t = cbrt(z + a * a * b);
	}
	else
	{
		if (z == b)
		{
			t = 1 - log10(z) + cos(a * a *b);
		}
		else
		{
			t = 1 / cos(z * a);
		}
	}

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "t = " << t << endl;
	cout << "z = " << z << endl;

	system("pause");
	return 0;
}
