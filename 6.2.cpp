#include "pch.h"
#include <iostream>
#include <cmath>
#include "windows.h"
using namespace std;

class Function // Базовый класс функция
{	
public:
	virtual void printFunction() = 0;	// Выводит функцию на экран

	virtual double count(double x) = 0;	// Считает значение функции от аргумента

	virtual void takeDerivative() = 0;	// Выводит производную
};

class Const : public Function // Класс, описывающий константу
{	
	double c;
public:
	Const(double c) { this->c = c; }

	void printFunction() { cout << "Функция: f(x) = " << c << endl; }

	double count(double x) { return c; }

	void takeDerivative() { cout << "Производная: 0" << endl; }
};

class Variable : public Function {	// Класс, описывающий переменную
public:
	void printFunction() { cout << "Функция: f(x) = x" << endl; }

	double count(double x) { return x; }

	void takeDerivative() { cout << "Производная: 1" << endl; }
};

class Sum : public Function {	// Класс, описывающий сумму двух чисел
	double y;
public:
	Sum(double y) { this->y = y; }

	void printFunction() { cout << "Функция: f(x) = x + y" << endl; }

	double count(double x) { return x + y; }

	void takeDerivative() { cout << "Производная: 2" << endl; }
};

class Difference : public Function {	// Класс, описывающий разность двух чисел
	double y;
public:
	Difference(double y) { this->y = y; }

	void printFunction() { cout << "Функция: f(x) = x - y" << endl; }

	double count(double x) { return x - y; }

	void takeDerivative() { cout << "Производная: 0" << endl; }
};

class Product : public Function {	// Класс, описывающий произведение двух чисел
	double y;
public:
	Product(double y) { this->y = y; }

	void printFunction() { cout << "Функция: f(x) = x * y" << endl; }

	double count(double x) { return x * y; }

	void takeDerivative() { cout << "Производная: y * dx" << endl; }
};

class Quotient : public Function {	// Класс, описывающий частное двух чисел
	double y;
public:
	Quotient(double y) { this->y = y; }

	void printFunction() { cout << "Функция: f(x) = x / y" << endl; }

	double count(double x) { return x / y; }

	void takeDerivative() { cout << "Производная: dx / y" << endl; }
};

class Sin : public Function { // Класс, описывающий синус угла в радианах
public:
	void printFunction() { cout << "Функция: f(x) = sin(x)" << endl; }

	double count(double x) { return sin(x); }

	void takeDerivative() { cout << "Производная: cos(x)" << endl; }
};

class Cos : public Function {	// Класс, описывающий косинус угла в радианах
public:
	void printFunction() { cout << "Функция: f(x) = cos(x)" << endl; }

	double count(double x) { return cos(x); }

	void takeDerivative() { cout << "Производная: -sin(x)" << endl; }
};

class Exp : public Function {	// Класс, описывающий возведение экспоненты в степень
public:
	void printFunction() { cout << "Функция: f(x) = e^x" << endl; }

	double count(double x) { return exp(x); }

	void takeDerivative() { cout << "Производная: e^x" << endl; }
};

class Ln : public Function {	// Класс, описывающий взятие натурального логарифма
public:
	void printFunction() { cout << "Функция: f(x) = ln(x)" << endl; }

	double count(double x) { return log(x); }

	void takeDerivative() { cout << "Производная: 1/x" << endl; }
};

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	double y, x;
	cout << "Константа" << endl << "Введите значение: ";
	cin >> y;
	Const c(y);

	cout << "Введите аргумент: ";
	cin >> x;

	c.printFunction();
	cout << "f(" << x << ") = " << c.count(x) << endl;
	c.takeDerivative();

	cout << endl << "Переменная" << endl << "Введите аргумент: ";
	cin >> x;
	Variable v;
	v.printFunction();
	cout << "f(" << x << ") = " << v.count(x) << endl;
	v.takeDerivative();

	cout << endl << "Сумма" << endl << "Введите x и y: ";
	cin >> x >> y;
	Sum s(y);
	s.printFunction();
	cout << "f(" << x << ") = " << s.count(x) << endl;
	s.takeDerivative();

	cout << endl << "Разница" << endl << "Введите x и y: ";
	cin >> x >> y;
	Difference d(y);
	d.printFunction();
	cout << "f(" << x << ") = " << d.count(x) << endl;
	d.takeDerivative();

	cout << endl << "Произведение" << endl << "Введите x и y: ";
	cin >> x >> y;
	Product p(y);
	p.printFunction();
	cout << "f(" << x << ") = " << p.count(x) << endl;
	p.takeDerivative();

	cout << endl << "Частное" << endl << "Введите x и y: ";
	cin >> x >> y;
	Quotient q(y);
	q.printFunction();
	cout << "f(" << x << ") = " << q.count(x) << endl;
	q.takeDerivative();

	cout << endl << "Sin" << endl << "Введите аргумент: ";
	cin >> x;
	Sin si;
	si.printFunction();
	cout << "f(" << x << ") = " << si.count(x) << endl;
	si.takeDerivative();

	cout << endl << "Cos" << endl << "Введите аргумент: ";
	cin >> x;
	Cos co;
	co.printFunction();
	cout << "f(" << x << ") = " << co.count(x) << endl;
	co.takeDerivative();

	cout << endl << "Exp" << endl << "Введите аргумент: ";
	cin >> x;
	Exp e;
	e.printFunction();
	cout << "f(" << x << ") = " << e.count(x) << endl;
	e.takeDerivative();

	cout << endl << "Ln" << endl << "Введите аргумент: ";
	cin >> x;
	Ln l;
	l.printFunction();
	cout << "f(" << x << ") = " << l.count(x) << endl;
	l.takeDerivative();

	system("pause");
	return 0;
}