// ConsoleApplication7.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL < "RUS");
	float C,K,F,b;
	cout << "Выберите величину: 1)Цельсия 2)Кельвины 3)фаренгейты ";
	cin >> b;
	if (b = 1) then  
	{
	cout << "Введите T: ";
	cin >> C;
	k = c + 273;
    f = c*1.8 + 32;
		cout << "Кельвинов: " << k << ". Фаренгейтов: " << f <<"\n";
	}
		if (b = 2) then
		{
			cout << "Введите T: ";
	cin >> K;
	C = K - 273;
	F = 1.8*(K - 273) + 32;
	cout << "Цельсия: " << c << ". Фаренгейтов: " << f << "\n";

			
		}

		if (b=3) then
		{
		cout << "Введите T: ";
		cin >> F;
		k = 5*(f-32)/9 + 273.15;
		c = 5*(f-32)/9;
		cout << "Кельвинов: " << k << ". Цельсия: " << c << "\n";
		}
    
	system("pause");
	return 0;
}