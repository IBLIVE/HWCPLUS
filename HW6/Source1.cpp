#include <cmath>
#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	const int N = 10;
	int arr[N];
	int sum = 0;
	int pos = 0;
	int aim; 

	for (int i = 0; i < N; i++) {
		cout << "Enter a value for " << i << " array position: ";
		cin >> arr[i];
	}
	cout << endl;
	cout << "Enter the number in search: " << endl;
	cin >> aim;

	double average = 0;

	for (int i(0); i < N; i++) {
		sum += arr[i];
		if (aim == arr[i]) {
			pos = i;
		}
	}
	cout << "The number in search is on " << pos << " position" << endl;
	cout << "The sum of array's elements is " << sum << endl;
	
	average = sum / (double)N;

	cout << "The average value of array is " << average<<endl;
	
	int mode[N] = { 0 };

	for (int i(0); i < N; i++) {
		for (int j(0); j < N; j++) {
			if (arr[i] == arr[j]) {
				mode[i] = mode[i] + 1;
			}
		}
	}

	int maxmode = 0;

	for (int i(0); i < N; i++) {
		if (mode[maxmode] < mode[i]) {
			maxmode = i;
		}
	}

	cout << "Mode of the array: " << arr[maxmode]<<endl;

	for (int i(0); i < N - 1; i++) {
		for (int j(0); j < N - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

	for (int i(0); i < N; i++) {
		cout << arr[i] << " " << endl;
	}
	_getch();
	return 0;



}
