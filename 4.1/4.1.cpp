﻿// Lab_04_1.cpp
// Горбачов Богдан
// Лабораторна робота № 4.1
// Цикли
// Варіант 3

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int N, i;
	double S;

	cout << "N = "; cin >> N;

	S = 0;
	i = 1;

	while (i <= N)
	{
		S += 1 / i + sqrt(1 + pow(sin(i), 2));
		i++;
	}
	cout << S << endl;

	S = 0;
	i = 1;

	do {
		S += 1 / i + sqrt(1 + pow(sin(i), 2));
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;

	for (i = 1; i <= N; i++)
	{
		S += 1 / i + sqrt(1 + pow(sin(i), 2));
	}
	cout << S << endl;

	S = 0;

	for (i = N; i >= 1; i--)
	{
		S += 1 / i + sqrt(1 + pow(sin(i), 2));
	}
	cout << S << endl;

	system("pause");
}