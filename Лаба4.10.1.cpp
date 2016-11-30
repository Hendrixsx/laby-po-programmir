// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int n=1, m = 0;
	cout << "Введите натуральное число:    " << endl;
	
	for (; n != 0;)
	{
		cin >> n;
		while (n != 0)     // пока число не станет равным нулю
		{

			m *= 10;
			m += n % 10;
			n = n / 10;
			
		}
		cout << "Новое число:  " << m << " " << endl;
		n = 1; m = 0;
	}

	system("pause");
	return 0;
}