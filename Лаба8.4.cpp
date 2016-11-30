// Лаба8.4.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <fstream>
#include <string>
#include <Windows.h>
#include <clocale>
#include <sstream> 
#include <iostream>
using namespace std;

int main() 
{
	//пример 8 Программа считает количество строк в файле add.txt выводит на экран и записывает в новый указанный пользователем файл.
	string a;
	setlocale(0, "");
	ofstream fout; // определение обьекта fout для вывода данных в файл
	ifstream fin; // определение обьекта fin для ввода данных из файла
	fin.open("add.txt"); // любой тхт по вкусу
	char с[100];
	cout << "Введите имя файла для записи" << endl;
	string name1;
	cin >> name1;
	string c = name1 + ".txt";
	fout.open(c.c_str(), ios::app);
	int line_nomer = 0;
	int n;
	string probel(" ");
	string sohr;
	//size_t nachaloSlova[100]; 
	//size_t konecSlova[100]; 
	while (getline(fin, a))
	{
		//cout<<"Строка в файле add.txt = "<<line_nomer<<"\n"; //вывод на экран
		//fout<<"Строка в файле add.txt = "<<line_nomer<<"\n"; //запись во второй файл
		line_nomer++;
	}
	cout << "Количество строк в файле add.txt = " << line_nomer << "\n"; //вывод на экран
	fout << "Количество строк в файле add.txt = " << line_nomer << "\n"; //запись во второй файл
	fin.close();
	fout.close();
	system("pause");
}