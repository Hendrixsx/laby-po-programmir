// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a2, a10, b10, b8, c10, pw, c3, i;
	cout << "Введите двоичное число A: "; 
	cin >> a2;
	a10 = 0;
	a10 += a2 % 10;
	a2 /= 10;
	pw = 1;
	while (a2 != 0)
	{
		a10 += (a2 % 10)*(pow(2, pw));
		a2 /= 10;
		pw++;
	}

	cout << "Введите восьмеричное число B: "; 
	cin >> b8;
	b10 = 0;
	b10 += b8 % 10;
	b8 /= 10;
	pw = 1;
	while (b8 != 0)
	{
		b10 += (b8 % 10)*(pow(2, pw));
		b8 /= 10;
		pw++;
	}

	c10 = pow(a10, 2)*(a10 + b10);
	cout << "Для ур-я вида: a*a(a+b) " << "\n";
	cout << "С в детясичной системе = " << c10 << "\n";
	cout << "С в троичной системе = ";
		i = 1000;
	for (; pow(3, i) > c10;) i--;
	for (i; i != -1; i--);
	{
		if (pow(3, i) < c10)
		{
			c10 = c10 - pow(3, i);
			c3 = c10 % 3;
			cout << c3;
		}
		else cout << "0";
	}
	
	cin.get();
exit: cout << " Нажмите любую клавишу для выхода";
	system("pause>>void");
	return 0;
}