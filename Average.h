#pragma once
#include <iostream>
#include <algorithm>
#include "windows.h" 

using namespace std;

template <typename T>
void avg(T * arr, int size)
{
	double s = 0;
	T res = 0;
	for (int i = 0; i < size; i++)
		s+= arr[i];
	res = s / size;
	cout << "Среднее значение = " << res;
}

template <typename T>
void fill(T* arr, int size, int command) 
{
	switch (command)
	{
		case 0: 
		{
			for (int i = 0; i < size; i++)
				arr[i] = rand() % 101;
			break;
		}

		case 1:
		{
			for (int i = 0; i < size; i++)
				arr[i] = 1.0 + size*rand() / (float)RAND_MAX;
			break;
		}

		case 2:
		{
			for (int i = 0; i < size; i++)
				arr[i] = 1.0 + size * rand() / (float)RAND_MAX;
			break;
		}

		case 3:
		{
			for (int i = 0; i < size; i++)
			{
				char ch = 97 + rand() % (122 - 96);
				arr[i] = ch;
			}
			break;
		}
	}
	system("@cls||clear");
}

template <typename T>
void print(T* arr, int size) 
{
	for (int i = 0; i < size; i++)
	{
		if (i) cout << " || ";
		cout << arr[i];
	}
	cout << endl;
}