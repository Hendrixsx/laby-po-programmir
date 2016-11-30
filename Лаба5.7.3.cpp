// Лаба5.7.3.cpp : Defines the entry point for the console application.
//


#include <math.h>
#include "stdafx.h"
#include <iostream>
using namespace std;
int const MAX = 100;

	void InitArray(int* a, int n) {
		for (int i = 0; i < n; i++) {
			a[i] = rand()%100 - 10 ;
		}
	}

	void BubbleSort(int* a, int n) {
		for (int i = n - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (a[j] > a[j + 1]) {
					int tmp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = tmp;
				}
			}
		}
	}

	void FDupElemInArray(const int* a, int n) {
		int counter = 0;
		int reps = 0;

		for (int i = 0; i < n; i++) {
			if (a[i] <0) {
				counter++;
				reps++;
				continue;
			}
			if (reps != 0) {
				std::cout << a[i] << " : " << reps << std::endl;
			}
			reps = 0;
		}
		std::cout << "\nThe number of repetitive elements: " << counter << std::endl;
	}

	void ShowArray(const int* a, int n) {
		for (int i = 0; i < n; i++) {
			std::cout << a[i] << " ";
		}
		std::cout << "\n\n";
	}

	int main() {

		int arr[MAX] = { 0 };

		InitArray(arr, MAX);             // заполняем массив случайными числами  от [0, 100]
		BubbleSort(arr, MAX);          // сортируем массив
		ShowArray(arr, MAX);          // выводим отсортированный массив
		FDupElemInArray(arr, MAX);  // находим количество всех повторяющихся элементов
									// и количество повторений каждого из таких элементов
		std::cin.get();
		std::cin.get();
		return 0;
	}

	





	