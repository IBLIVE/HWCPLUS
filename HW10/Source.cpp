#include <conio.h>
#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int moduleof(int x) {
	int t = x;
	if (t < 0) {
		t = -t;
	}
	return t;
}

int main() {
	int x;
	cout << "This program finds absolute of a number\n";
	cout << "Enter the number: ";
	cin >> x;
	cout << "\n";
	cout << "The absolute of entered number is " << moduleof(x);
	_getch();
	return 0;
}

