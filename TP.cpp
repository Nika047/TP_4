#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
#include "Average.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	for (;;) 
	{
		system("@cls||clear");
		
		int size = 5/*rand() % 101*/;
		int command = 0;
		
		try 
		{
			cout << "Выберите нужный тип:" << endl << endl;
			cout << "0. Int" << endl;
			cout << "1. Float" << endl;
			cout << "2. Double" << endl;
			cout << "3. Char" << endl;
			cout << "4. Выход" << endl << endl;
			cout << "Команда:";
			cin >> command;

			if (command < 0 || command > 4) 
				throw string("Выберите другое действие");
		} 

		catch (string myNum) 
		{
			cout << myNum;
			cout << endl << endl << "Нажмите любую клавишу" << endl;
			_getch();
			continue;
		}

		switch (command)
		{
			case 0: 
			{
				int* arr = new int[size];
				fill<int>(arr, size, command);
				print<int>(arr, size);
				avg(arr, size);
				break;
			}

			case 1: 
			{
				float *arr = new float[size];
				fill<float>(arr, size, command);
				print<float>(arr, size);
				avg(arr, size);
				break;
			}

			case 2: 
			{
				double *arr = new double[size];
				fill<double>(arr, size, command);
				print<double>(arr, size);
				avg(arr, size);
				break;
			}

			case 3: 
			{
				char *arr = new char[size];
				fill<char>(arr, size, command);
				print<char>(arr, size);
				avg(arr, size);
				break;
			}

			case 4: 
			{
				exit(0);
			}
		}

		cout << endl << endl << "Нажмите любую клавишу" << endl;
		_getch();
	}
}