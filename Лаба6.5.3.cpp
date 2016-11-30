// ����6.5.3.cpp : Defines the entry point for the console application.
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
	cin >> n; // ��������� � ���������� n
	int **a = new int*[n]; // ������� ������ ����������
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n]; // ������� ��������
	}
	// � ������ ������ ��� � ������� ��������. 
	cout << "A mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " "; // ������� �������� �� ���������
		}
		cout << endl; // ��������� ������
	}

	int **b = new int*[n]; // ������� ������ ����������
	for (int i = 0; i < n; i++)
	{
		b[i] = new int[n]; // ������� ��������
	}
	// � ������ ������ ��� � ������� ��������. 
	cout << "B mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = rand() % 50;
			cout << b[i][j] << " "; // ������� �������� �� ���������
		}
		cout << endl; // ��������� ������
	}

	int **c = new int*[n]; // ������� ������ ����������
	for (int i = 0; i < n; i++)
	{
		c[i] = new int[n]; // ������� ��������
	}
	// � ������ ������ ��� � ������� ��������. 
	cout << "C mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 2 * (a[i][j] + pow(-1, b[i][j])) - (a[j][i]*b[i][j]);
			cout << a[i][j] << " "; // ������� �������� �� ���������
		}
		cout << endl; // ��������� ������
	}
	
	// �������� �������
	for (int i = 0; i < n; i++)
	{
		delete[]a[i]; // ������� ������ �������
	}
	delete[] a; // � ����� ������

	system("pause");
	return 0;
}

