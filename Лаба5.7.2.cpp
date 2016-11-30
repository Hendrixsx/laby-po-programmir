// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

bool simple(int a)
{
	for (int i = 2; i*i <= a; i++)
		if (a%i == 0) return 0;
	return 1;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	const int SZ = 20;
	int mas1[SZ] = { 5, 7, 24, 25, 3, 6, 12, 56, 9, 17, 48, -77, 34, 3, 4, 68, 86, 87, 32, 55 };
	cout << "Дан массив: "<<endl;
	for (int i = 0; i < SZ; i++)
		cout << mas1[i]<<"\n"; 
	int mas2[SZ];
	int j = 0;
	for (int i = 0; i < SZ; i++)
		if (simple(mas1[i])) { mas2[j] = mas1[i]; j++; }
	cout << "\n" << "Массив B, из простых чисел массива А: "<<endl;
	for (int i = 0; i < j; i++)
		cout << mas2[i] << "\n";

		int max1 = mas2[0], max2 = mas2[0], max3 = mas2[0];
		for (int i = 0; i < SZ; i++)
		{
			if (mas2[i] > max3)
			{
				max1 = max2;
				max3 = max3;
				max3 = mas2[i];
			}
			
		}

	int mask=0;
	cout << "В двоичной системе это: " << endl;
	for (int i = 0; i < SZ; i++) 
		{
			if (mas2[i] >= 0)
			{
				if (pow(2, i) < mas2[i])
				{
					mas2[i] = mas2[i] - pow(2, i);
					mask = mas2[i] % 2;
					cout << "1";
				}
				 else cout << "0";
			}
		}
	

exit: cout << " Для выхода нажмите любую клавишу: ";
	system("pause>>void");
	return 0;
}

