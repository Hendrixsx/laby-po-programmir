// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	cout << "Введите кол-во эл. массива: ";

	int n;
	cin >> n;

	int max = INT_MIN;
	int *mas1 = new int[n];

	for (int i = 0; i < n; ++i)
    cin >> mas1[i]; // vvod 

	for (int i = 0; i < n; ++i)// 1) - max
	{
		if (mas1[i] < 0)
		{
			if (mas1[i] > max)  max = mas1[i];
		}
	}
	cout << "Наибольшее из отрицательных чисел = " << max << "\n"; 

	int sum; // 2) sum mod 2 = 0
	sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (mas1[i] > 0)
		{
			if (mas1[i] % 2 == 0) sum += mas1[i];
		}
	}
	cout << "сумма четных чисел = " << sum << "\n";


	cout << "Введите кол-во эл. массива 2: "; // 3) 2 massiva v odnom

	int m;
	cin >> m;
	int *mas2 = new int[m];
	int *mas3 = new int[n + m];

	cout << "Второй массив: "<<"\n"; // второй массив
	for (int j = 0; j < m; ++j)
	{
		cin >> mas2[j];
	}
	int i = 0;
	int j = 0;
	int index = 0;

	while (i < n && j < m) //3 mas
	{
		
		// обновляем нужный индекс (i или j)
		if (mas1[i] < mas2[j])
		{
			mas3[index] = mas1[i];
			i++;
		}
		else
		{
			mas3[index] = mas2[j];
			j++;
		}

		index++;
	}

	while (i < n)
	{
		mas3[index] = mas1[i];
		index++;
		i++;
	}

	while (j < m)
	{
		mas3[index] = mas2[j];
		index++;
		j++;
	}

	cout << "Массис С: ";
	// Выводим отсортированный массив
	for (int k = 0; k < n + m; k++)
	{
		cout << mas3[k] << ' ';
	}
	int k, raz;
	cin >> k;
	cout << "Введите количество элементов, которые хотите удалить \n";
	cin >> n;
	int raz;
	for (int i = k; i < raz - n; i++)
	{
		mas3[i] = mas3[i + n];
		//raz -= n;
	}

	for (int i = 0; i<raz - n; i++)
		cout << mas3[i] << ' ';
	




exit: cout << "Для выхода нажмите любую клавишу: ";
	system("pause>>void");
	return 0;
}