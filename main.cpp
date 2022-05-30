#include <iostream>
#include "template.h"
#include "windows.h"
using namespace std;

int* intMass;
double* doubleMass;

void start(int& n)
{
	cout << "Введите размер массива\n";
	n = ReadInteger();
}


void menu() {
	system("cls");
	cout << "--------------------MENU---------------------\n";
	cout << "Заполнение массива с клавиатуры.............1\n";
	cout << "Найти количество нулевых элементов..........2\n";
	cout << "Выход.......................................3\n";
}


int main() 
{
	setlocale(LC_ALL, "ru");

	int n;
	start(n);

	intMass = new int[n];
	doubleMass = new double[n];

	int stop = 0;
	int type = 0;

	do {
		menu();
		stop = ReadInteger();
		switch (stop) {
		case 1:
			system("cls");
			cout << "Выберите тип данных массива: 0 - int, 1 - double" << endl; cin >> type;
			if (type == 0)
			{
				initMass(intMass, n);
				break;
			}
			else if (type == 1)
			{
				initMass(doubleMass, n);
				break;
			}
			else
			{
				cout << "[Undefined type] Please select correct type!" << endl;
			}
			system("pause");
		case 2:
			system("cls");
			if (type == 0)
			{
				findNull(intMass, n);
				break;
			}
			else if (type == 1)
			{
				findNull(doubleMass, n);
				break;
			}
			system("pause");
		case 3:
			system("cls");
			cout << "Program was exit..." << endl;
			exit(0);
			break;
		default:
			system("cls");
			cout << "Error: Undefined function!" << endl;
			system("pause");
			break;
		}
	} while (stop);
}


