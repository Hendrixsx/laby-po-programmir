// ����8.4.cpp : Defines the entry point for the console application.
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
	//������ 8 ��������� ������� ���������� ����� � ����� add.txt ������� �� ����� � ���������� � ����� ��������� ������������� ����.
	string a;
	setlocale(0, "");
	ofstream fout; // ����������� ������� fout ��� ������ ������ � ����
	ifstream fin; // ����������� ������� fin ��� ����� ������ �� �����
	fin.open("add.txt"); // ����� ��� �� �����
	char �[100];
	cout << "������� ��� ����� ��� ������" << endl;
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
		//cout<<"������ � ����� add.txt = "<<line_nomer<<"\n"; //����� �� �����
		//fout<<"������ � ����� add.txt = "<<line_nomer<<"\n"; //������ �� ������ ����
		line_nomer++;
	}
	cout << "���������� ����� � ����� add.txt = " << line_nomer << "\n"; //����� �� �����
	fout << "���������� ����� � ����� add.txt = " << line_nomer << "\n"; //������ �� ������ ����
	fin.close();
	fout.close();
	system("pause");
}