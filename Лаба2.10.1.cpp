// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, alfa, beta;
	cout << "�������, ������� ������ �������������� ������������ (a,b): " << endl;
		cin >> a >> b;
		c = sqrt(a*a + b*b);
		alfa = atan(a / b);
		beta = 90 - alfa;
		cout << "���������� = " << c << ". ���� alfa � beta =" << alfa << " " << beta;
		system("pause>>void");


    return 0;
}

