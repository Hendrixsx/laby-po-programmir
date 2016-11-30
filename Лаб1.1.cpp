// ConsoleApplication112.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "¬ведите любое целое число: ";
	cin >> a;
	if (a > 0) a = a * 2;
	
	else if (a < 0) a = a - 3;
	
	else  a = 10;
	
	cout << "¬аше число немного помен€лось -_(<_>)_- : " << a << endl;
	system("pause");
    return 0;
}

