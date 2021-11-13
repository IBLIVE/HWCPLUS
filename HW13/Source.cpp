#include <conio.h>
#include <iostream>
#include <ctime>

using namespace std;

void sortbubble(int* arr, int length) {
	int temp = 0;
	for (int i = 0; i < length-1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}
}


int main() {
	srand(time(NULL));
	
	const int N = 10;
	int arr[N];

	for (int i = 0; i < N; i++) {
		arr[i] = 1 + (int)rand() % 100;
		cout << arr[i] << " ";
	}

	sortbubble(arr, N);
	cout << "\n";

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}


	_getch();
	return 0;
}