// лаб1.8.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, m, q, i, j;
	cout << "Enter cols count in matrix A and rows count in matrix B: ";
	cin >> n;
	cout << "Enter rows count in matrix A: ";
	cin >> m;
	cout << "Enter cols count in matrix B: ";
	cin >> q;
	int **aArr = new int *[m];
	for (i = 0; i < m; i++)
		aArr[i] = new int[n];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "Enter arrays elements of matrix A ";
			cin >> aArr[i][j];
		}
	}
	cout << "Matrix A: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << setw(5) << aArr[i][j];
		cout << endl;
	}
	int **bArr = new int *[n];
	for (i = 0; i < n; i++)
		bArr[i] = new int[q];
	for (i = 0; i<n;i++)
	{
		for (j = 0; j < q; j++)
		{
			cout << "Enter arrays elements of matrix B ";
				cin >> bArr[i][j];
		}
	}
	cout << "Matrix B: " << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < q; j++)
				cout << setw(5) << bArr[i][j];
			cout << endl;
		}
	int **cArr = new int *[i];
	for (i = 0; i < m; i++)
		cArr[i] = new int[j];
	for (i = 0; i < m; i++)
		for (j = 0; j < q; j++)
		{
			cArr[i][j] = 0;
			for (int k = 0; k <= q + 1; k++)
				cArr[i][j] += (aArr[i][k] * bArr[k][j]);
		}
	cout << "Matrix C: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
			cout << setw(5) << cArr[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}