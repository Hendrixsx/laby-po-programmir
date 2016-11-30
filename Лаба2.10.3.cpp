// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	double x,y;
	cout << "Дано: sqrt^7(x^2 + 2.7*pi*cos(sqrt(|x^3|)) - 2 + e^x) " << endl;
	cout << "Введите x: ";
	cin >> x;
	y = pow(x*x + 2.7*3.14*cos(sqrt(fabs(x*x*x))) - 2 + exp(x), 1.7);
	cout << "Ответ в уме посчитал: " << y;


	
	system("pause>>void");


	return 0;
}
