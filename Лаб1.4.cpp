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
	cout << "��� ��-� ���� (ax^2 + bx + c = 0) ������� a,b,c : ";
	cin >> a >> b >> c;
	d = b*b - 4 * a*c;
		if (d < 0) cout << "��� ������, ����"; 
		if (d>0)
		{
			float x1 = (-b + sqrtf(d)) / (2 * a);
			float x2 = (-b - sqrtf(d)) / (2 * a);
			cout << "���� �����, ������: " << x1 << " " << x2;
		}
   else if (d = 0) 
	{
		float x1 = (-b + sqrtf(d)) / (2 * a);
		cout << "� ��� ������ ���� ������, �������: " << x1;
	}



exit: cout << "������� ����� ������� ��� ������";
	system("pause>>void");
	return 0;
}