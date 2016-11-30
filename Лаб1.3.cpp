// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	cout << "Введите число: ";
	cin >> a;
	cout << "Выберите в какую степень вы хотите его возвести: ";
    cin >> b;
	if(b < 0)
	{
		cout << "Не вариант.."; goto exit;
	}
	else c = pow(a,b);
	cout << endl << "Число в выбранной степени = " << c << endl;
exit: cout << " Нажмите любую клавишу для выхода";
	system("pause>>void");
	return 0;
}
