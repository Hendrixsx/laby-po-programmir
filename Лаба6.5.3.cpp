// Лаба6.5.3.cpp : Defines the entry point for the console application.
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
	cout << "A mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " "; // Вывести элементы на консольку
		}
		cout << endl; // Двумерный массив
	}

	int **b = new int*[n]; // Создаем массив указателей
	for (int i = 0; i < n; i++)
	{
		b[i] = new int[n]; // Создаем элементы
	}
	// А дальше работа как с обычным массивом. 
	cout << "B mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = rand() % 50;
			cout << b[i][j] << " "; // Вывести элементы на консольку
		}
		cout << endl; // Двумерный массив
	}

	int **c = new int*[n]; // Создаем массив указателей
	for (int i = 0; i < n; i++)
	{
		c[i] = new int[n]; // Создаем элементы
	}
	// А дальше работа как с обычным массивом. 
	cout << "C mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 2 * (a[i][j] + pow(-1, b[i][j])) - (a[j][i]*b[i][j]);
			cout << a[i][j] << " "; // Вывести элементы на консольку
		}
		cout << endl; // Двумерный массив
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

