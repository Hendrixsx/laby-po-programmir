// ���1.5.cpp : Defines the entry point for the console application.
//

#include <math.h>
#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int a, b, n;
	cout << "������� ���-�� �������: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{		a = rand() % 10;
	cout << "�������� �����: " << endl;
	cin >> b;
	if (b == a) cout << "�� - ����������: " <<a<< endl;
	} cout << "�� - �� ����������: " << a << endl;
	system("pause");
    return 0;
}

