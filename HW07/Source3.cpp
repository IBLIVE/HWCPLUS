#include <iostream>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int arr1[3][3];
	int arr2[3][3];
	int arr[3][3];

	cout << "Fill 1st matrix" << endl;

	for (int i(0); i < 3; i++) {
		for (int j(0); j < 3; j++) {
			cin >> arr1[i][j];
			arr[i][j] = 0;
		}
	}

	system("cls");

	cout << "Fill 2nd matrix" << endl;

	for (int i(0); i < 3; i++) {
		for (int j(0); j < 3; j++) {
			cin >> arr2[i][j];
		}
	}

	system("cls");

	for (int i(0); i < 3; i++) {
		for (int j(0); j < 3; j++) {
			for (int k(0); k < 3; k++) {
				arr[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	
	for (int i(0); i < 3; i++) {
		for (int j(0); j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	_getch();
	return 0;
}
