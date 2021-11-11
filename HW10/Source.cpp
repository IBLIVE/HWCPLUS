#include <iostream>
#include <conio.h>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int absEr(int x, int y) {
	return abs(x - y);
}

double relEr(int x, int y) {
	return abs(absEr(x, y) / (double)y);
}

int main() {
	int est, tru;
	cout << "This program calculates relative and absolute errors\n";
	cout << "Enter estimated value: ";
	cin >> est;
	cout << "\n";
	cout << "Enter true value: ";
	cin >> tru;
	cout << "An absolute error is: " << absEr(est, tru) << "\n";
	cout << "A relative error is: " << relEr(est, tru) << "\n";
	_getch();
	return 0;
}

