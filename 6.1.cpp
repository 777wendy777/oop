#include "pch.h"
#include <iostream>
#include "windows.h"

using namespace std;

class Property //класс Собственность
{	
protected:
	double worth;
public:
	Property(double worth) //конструктор 
	{
		this->worth = worth;
	}

	virtual double calculateTax() = 0;//виртуальный метод рассчета налога

	virtual ~Property() //деструктор
	{
	}
};

class Appartment : public Property //класс Квартира
{	
public:
	Appartment(double worth) : Property(worth) {};
	double calculateTax() 
	{
		return worth / 1000;
	}
};

class Car : public Property //класс Автомобиль
{	
public:
	Car(double worth) : Property(worth) {};
	double calculateTax() 
	{
		return worth / 200;
	}
};

class CountryHouse : public Property //класс Загородный дом
{	
public:
	CountryHouse(double worth) : Property(worth) {};
	double calculateTax() 
	{
		return worth / 500;
	}
};

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	Property *x[7];

	for (int i = 0; i < 7; i++) 
	{
		double worth;
		cout << "Введите стоимость " << i + 1 << " : ";
		cin >> worth;
		if (i < 3) 
		{
			x[i] = new Appartment(worth);
		}
		else 
		{
			if (i < 5) 
			{
				x[i] = new Car(worth);
			}
			else 
			{
				x[i] = new CountryHouse(worth);
			}
		}
	}

	cout << "Налоги:" << endl;
	for (int i = 0; i < 7; i++) 
	{
		cout << i + 1 << ". " << x[i]->calculateTax() << endl;
	}

	system("pause");
	delete[] x;
	return 0;
}