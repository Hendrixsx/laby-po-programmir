// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	cout << "������� �����: ";
	cin >> a;
	cout << "�������� � ����� ������� �� ������ ��� ��������: ";
    cin >> b;
	if(b < 0)
	{
		cout << "�� �������.."; goto exit;
	}
	else c = pow(a,b);
	cout << endl << "����� � ��������� ������� = " << c << endl;
exit: cout << " ������� ����� ������� ��� ������";
	system("pause>>void");
	return 0;
}
