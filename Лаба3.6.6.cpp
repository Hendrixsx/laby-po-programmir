// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int var1 = 1;
	int sum = 0;
	int otr = 0;
	cout << "������� �������� ������������������ /0-�����/: "<<"\n";
	while (var1 != 0)
	{
		cin >> var1;
		if (var1 > 0) // �������������
			sum += var1;
	}

	cout << "����� �������������: " << sum;
		
	



	system("pause>>void");


	return 0;


}
