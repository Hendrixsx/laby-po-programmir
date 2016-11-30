// лаб1.7.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
#define n 5
int main()
{
	setlocale(LC_ALL, "RUS");
	double a[n], sr=0;
	int k=0;

	for (int i = 0; i < n; i++)
		cin >> a[n];
	for (int i = 0; i < n; i++)
	if (a[n] > 0) k++;
	sr = sr + a[n];
	cout << "k= " << k << "sr= " << sr / n;
	system("pause");
	return 0;

}

