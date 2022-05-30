#pragma once
#include <cstdlib>
#include <iostream>
#include <typeinfo>
#include <stdio.h>

using namespace std;


int ReadInteger() {
	int number;
	char c;

	while (1) {
		// Read token token from stdout, ended by newline
		if (!scanf_s("%d", &number) || getchar() != '\n') {
			// Clear stdout before reading next token
			while ((c = getchar()) != '\n' && c != EOF);
		}
		else {
			return number;
		}

		printf_s("Incorrect number.\nTry again: ");
	}
}


double ReadDouble() {
	double number;
	char c;

	while (1) {
		if (!scanf_s("%lf", &number) || getchar() != '\n') {
			while ((c = getchar()) != '\n' && c != EOF);
		}
		else {
			return number;
		}

		printf_s("Incorrect number.\nTry again: ");
	}
}


// Array Initialization Template
template <typename T>
void initMass(T* mass, int n) {
	for (int i = 0; i < n; i++) {
		cout << "mass[" << i << "]" << " = ";
		mass[i] = ReadInteger();
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		cout << "mass[" << i << "]" << " = " << mass[i] << '\t';
	}
};


// Explicit overload for the double type
void initMass(double* mass, int n) {
	system("cls");
	double value;
	for (int i = 0; i < n; i++) {
		cout << "mass[" << i << "]" << " = ";
		cin >> value;
		if (value > 10.0)
			mass[i] = value;
		else {
			cout << "[Incorrect value] Please enter value > than 10." << endl;
			i--;
		}

	}
	for (int i = 0; i < n; i++) {
		cout << "mass[" << i << "]" << " = " << mass[i] << endl;
	}
	system("pause");
};


// Template for finding null elements
template <typename T>
void findNull(T* mass, int n) {
	system("cls");
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mass[i] == 0)
			k++;
	}
	cout << "Количество нулевых элементов: " << k << endl;
	system("pause");
};