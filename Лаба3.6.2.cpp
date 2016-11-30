// ConsoleApplication12.cpp : Defines the entry point for the console application.
//
#include <math.h>
#include "stdafx.h"
#include <iostream> 
using namespace std;



int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	if (x >= -2 && x <= 2)
	{
		if (x*x + y*y <= 4 && x*x + y*y >= 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	system("pause");
exit: (cout << "Нажмите любую клавишу для выхода");
    return 0;
}

