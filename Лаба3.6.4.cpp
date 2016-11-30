// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	float pi = 3.14;
	x = -2 * pi;
	while (x <= 2 * pi)
	{
		y = sin(x); x = x + pi / 8; cout << "y= " << y << "\n";
	}


	system("pause>>void");


	return 0;


}