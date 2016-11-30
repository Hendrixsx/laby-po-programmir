// лаб1.9.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
int _tmain(int argc, _TCHAR* argv[])
{
	std::string s, buf; bool flag = true;
	std::cin >> s;
	for (int i = 0; i<s.length() && flag; i++)//проверка на валидность знаков числа
	{
		buf.insert(buf.end(), s[i]);
		if (!isdigit(s[i]) || atoi(buf.c_str())>6)
			flag = false;
		buf.clear();
	}
	if (flag)//проверка на четность
	{
		int k = 0;
		for (int i = 0; i<s.length(); i++)
		{
			buf.insert(buf.end(), s[i]);
			k += (int)pow((float)16, i)*atoi(buf.c_str());
			buf.clear();
		}
		if (k % 2 == 0)
			std::cout << "The number is even\n";
		else
			std::cout << "The number is not even\n";
	}
	else
		std::cout << "The string is not a number in a sevenfold radix\n";
	system("pause");
	return 0;
}