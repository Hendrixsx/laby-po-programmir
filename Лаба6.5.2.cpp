// Лаба6.5.2.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

bool simple(int a)
{
	for (int i = 2; i*i <= a; i++)
		for (int j = 2; j*j <= a; j++)
			if (a%i == 0 || a%j == 0) return 0;
	return 1;
}

int main()
{

	srand(time(NULL));
	int n = 0;
	int sum = 0;
	cin >> n; // Считываем с клавиатуры n
	int **a = new int*[n]; // Создаем массив указателей
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n]; // Создаем элементы
	}
	// А дальше работа как с обычным массивом. 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " "; // Вывести элементы на консольку
		}
		cout << endl; // Двумерный массив
	}

	int m;
	cin >> m;
	int *B = new int[m];
	
	int suma = 0;
	int s = 0, sr = 0;;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s = s + a[i][j];
			sr++;
			if (i = n)
			{
				cout << j << "Среднее арифм = " << s / sr;
				for (int j = 0; j < m; ++j)
				{
					B[j] = s/sr;
				}
				s = 0;
				sr = 0;
			}
		}
	}

	

	cout << "Mas B: " << endl;
	for (int j = 0; j < m; ++j)
	{
		cout << B[j] << "\t";
	}
	// Удаление массива
	for (int i = 0; i < n; i++)
	{
		delete[]a[i]; // Удаляем каждый элемент
	}
	delete[] a; // А потом массив

	system("pause");
	return 0;
}