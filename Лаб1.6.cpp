// ConsoleApplication7.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL < "RUS");
	float C,K,F,b;
	cout << "�������� ��������: 1)������� 2)�������� 3)���������� ";
	cin >> b;
	if (b = 1) then  
	{
	cout << "������� T: ";
	cin >> C;
	k = c + 273;
    f = c*1.8 + 32;
		cout << "���������: " << k << ". �����������: " << f <<"\n";
	}
		if (b = 2) then
		{
			cout << "������� T: ";
	cin >> K;
	C = K - 273;
	F = 1.8*(K - 273) + 32;
	cout << "�������: " << c << ". �����������: " << f << "\n";

			
		}

		if (b=3) then
		{
		cout << "������� T: ";
		cin >> F;
		k = 5*(f-32)/9 + 273.15;
		c = 5*(f-32)/9;
		cout << "���������: " << k << ". �������: " << c << "\n";
		}
    
	system("pause");
	return 0;
}