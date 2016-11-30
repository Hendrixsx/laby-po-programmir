// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c, d;
	cout << "Для ур-я вида (ax^2 + bx + c = 0) введите a,b,c : ";
	cin >> a >> b >> c;
	d = b*b - 4 * a*c;
		if (d < 0) cout << "Нет корней, пока"; 
		if (d>0)
		{
			float x1 = (-b + sqrtf(d)) / (2 * a);
			float x2 = (-b - sqrtf(d)) / (2 * a);
			cout << "Ваши корни, привет: " << x1 << " " << x2;
		}
   else if (d = 0) 
	{
		float x1 = (-b + sqrtf(d)) / (2 * a);
		cout << "У вас только один корень, здрасте: " << x1;
	}



exit: cout << "Нажмите любую клавишу для выхода";
	system("pause>>void");
	return 0;
}