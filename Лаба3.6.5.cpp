// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int N,x,sum;
	x = 0;
	sum = 0;
	cout << "Введите N>0: ";
	cin >> N;
	if(N < 0) cout << "Пока";
	else 
	{
		while (x<=N)
		{
			x = x + 1;
			if (x % 2 != 0) sum = sum + x;
		}
		cout << "сумма натуральных нечётных чисел меньше N = " << sum;
	}
	
	


	system("pause>>void");


	return 0;


}
