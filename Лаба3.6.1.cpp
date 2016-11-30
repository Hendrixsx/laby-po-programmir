// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int x;//y=3,4,1
	float y; //x=-3<,2<,2
	cout << "¬ведите x: ";
	cin >> x;
	if (x < -3) y = 3;
	if (x >= -3 || x < 2) y = 2;
	if (x >= 2) y = 2;
	cout << "Y= " << y;


	system("pause>>void");


	return 0;
}