#include "pch.h"
#include "windows.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	ofstream f("fff.txt");	// Открытие файла на считывание данных изз него

	char c = 0;

	while (c != '\n') {
		cin.get(c);
		f << c;	// Посимвольный ввод текста в файл
	}


	f.close();	// Закрытие файла
	return 0;
}
