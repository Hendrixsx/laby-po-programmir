// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a2, a10, i;
	cout << "������� �������� �����: "
	cin >> a2;
	a10 = 0;
	a10 += a2 % 10;
	a2 /= 10;
	i = 1;
	while (a2 != 0)
	{
		a10 += (a2 % 10)*(pow(2, i));
		a2 /= 10;
		i ++;
	}

	cout << "���������� ������ �����: " << a10;
exit: cout << " ������� ����� ������� ��� ������";
	system("pause>>void");
	return 0;
}