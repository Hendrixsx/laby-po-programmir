// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int L,M,S;
	cout << "������� ����� L (��.): ";
	cin >> L;
	M = L / 100;
	S = L % 100;
	cout << "������ �����: " << M << ". �����������: " << S;


	system("pause>>void");


	return 0;


}

