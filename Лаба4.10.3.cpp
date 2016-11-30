// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

float mpd(float x) // functions mpd - "metod polovinnogo deleniya"
{
	return (x - 0.2 * sin(x + 0.5));
}
int main()
{
	setlocale(0, "");
	float a, b, e, x; int k = 0;
	cout << "1. y=3*cos(2*x+4)\n";
	cout << "Левая граница a=";
	cin >> a;
	cout << "Правая граница b=";
	cin >> b;
	cout << "Точность e=";
	e = pow(10,-4);
	cout << e;
	x = (a + b) / 2;
	cout << "Корень уравнения:" << x;
	while (fabs(b - a)>e)
	{
		if (mpd(a)*mpd(x) <= 0) b = x;
		else a = x;
		x = (a + b) / 2;
		k++;
		cout << "\nТочность: " << fabs(b - a) << " Итерация №=" << k << " Корень уравнения: " << x;
	}
	cout << "\nКоличество итераций =" << k << "\nКорень уравнения: " << x;
		
exit: cout << " Для выхода нажмите любую клавишу: ";
	system("pause>>void");
	return 0;
}