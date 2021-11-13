#include <iostream>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
	const int N = 10;
	int arr[N];

	for (int i(0); i < N; i++) {
		int GPA = 0;
		cout << "Enter " << i<< " student's GPA: ";
		cin >> arr[i];
		if (arr[i] > 5 || arr[i] < 0) {
			i--;
		}
		cout << endl;
	}

	for (int i(0); i < N; i++) {
		cout << i << " student's GPA: " << arr[i] <<endl;
	}

	for (int i(0); i < N; i++) {
		if (arr[i] < 2) {
			cout << "Student number " << i << " must be excluded" << endl;
		}
	}

	_getch();
	return 0;
}