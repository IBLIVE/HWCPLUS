#include <iostream>
#include <cstring>
#include <cctype>
#include <conio.h>

using std::endl;
using std::cin;
using std::cout;

int main() {
	int a, b, c, d;
	do {
		cout << "Enter 1st matrix's dimensions: ";
		cin >> a >> b;
		cout << "Enter 2nd matrix's dimensions: ";
		cin >> c >> d;
		if (c != b) {
			cout << "Incorrect dimensions";
			_getch();
		}

	} while (b != c);
	system("cls");

	int** mat1 = new int* [a];
	for (int i(0); i < a; i++) {
		mat1[i] = new int[b];
	}

	int** mat2 = new int* [c];
	for (int i(0); i < c; i++) {
		mat2[i] = new int[d];
	}

	int** mat3 = new int* [a];
	for (int i(0); i < a; i++) {
		mat3[i] = new int[d];
	}

	for (int i(0); i < a; i++) {
		for (int j(0); j < b; j++) {
			cin >> mat1[i][j];
		}
	}

	for (int i(0); i < c; i++) {
		for (int j(0); j < d; j++) {
			cin >> mat2[i][j];
		}
	}

	for (int i(0); i < a; i++) {
		for (int j(0); j < d; j++) {
			mat3[i][j]=0;
		}
	}

	system("cls");

	for (int i(0); i < a; i++) {
		for (int j(0); j < d; j++) {
			for (int k(0); k < b; k++) {
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	system("cls");

	for (int i(0); i < a; i++) {
		for (int j(0); j < d; j++) {
			cout << mat3[i][j] << " ";
		}
		cout << endl;
	}


	_getch();
	return 0;
}
