// ConsoleApplication13.cpp : Defines the entry point for the console application.
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
	if (x >= 1.5 && x <= 4.5)
	{
		if (x*x + 3*y*y <= 9 && 3*x*x + y*y >= 9)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	system("pause");
exit: (cout << "Нажмите любую клваишу для выхода");
	return 0;
}