#include "pch.h"
#include <iostream>
#include<string>
#include "windows.h"

using namespace std;

class  Figure //абстрактный базовый класс фигура
{
protected:
	double sqr;
	
public:
	virtual void square() = 0;
};

class Quadrilateral : public Figure //производный абстрактный класс четырехуголник
{
protected:
	double a1, a2, a3, a4;
public:
	void enter()
	{
		cout << "Введите длину двух сторон четырехуголника:";
		cin >> a1 >> a2 ;
		
	}
	virtual void square() = 0;
};
class Rhombus : public Quadrilateral //производный класс ромб
{
private:
	double h;
public:
	void set()
	{
	cout << "Введите высоту ромба:" ;
	cin >> h;
	}
	void square() 
	{
		
		sqr = a1 * h;
		cout << "Площадь ромба="<< sqr<<endl;
	}
};
class Rect : public Quadrilateral //производнфый класс прямоугольник
{
	public:
	void square()
	{
		sqr = a1 * a2;
		cout << "Площадь прямоугольника=" << sqr << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	
	Rhombus a;
	a.enter();
	a.set();
	a.square();
	Rect b;
	b.enter();
	b.square();
	system("pause");
	return 0;
}
