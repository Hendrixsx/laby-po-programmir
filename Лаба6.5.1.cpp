// Лаба6.5.1.cpp : Defines the entry point for the console application.
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
		if (a%i == 0 ||a%j == 0) return 0;
	return 1;
}

int main()
{
	int min = 0;
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
	
	min = a[0][0];// берем самый первый элемент массива и считаем, что он минимальный.
	int suma = 0;
	int sk = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < min) min = a[i][j];
			if (a[i][j] > 0) suma = suma + a[i][j];
			if (simple(a[i][j])) sk++;
		}
	}
	cout << "min = " << min << endl << "sum = " << suma << "simple amount = "<< sk << endl;
	// Удаление массива
	for (int i = 0; i < n; i++)
	{
		delete[]a[i]; // Удаляем каждый элемент
	}
	delete[] a; // А потом массив

	system("pause");
	return 0;
}