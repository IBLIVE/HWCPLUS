#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;

double fact(int x) {
	double fact = 1;
	for (int i = 1; i <= x; i++) {
		fact = fact * (double)i;
	}
	return fact;
}

double permute(int n, int m) {
	return (fact(n) / fact(n - m));
}

double sinx(double x) {
	double sum = 0;
	int i = 1;
	double n = x;
	while (abs(n) > 1e-10) {
		sum += n;
		n = pow(-1, i) * pow(x, 2 * i + 1) / fact(2 * i + 1);
		i++;
	}
	return sum;
}

double cosx(double x) {
	double sum = 0;
	int i = 1;
	double n = 1;
	while (abs(n) > 1e-10) {
		sum += n;
		n = pow(-1, i) * pow(x, 2 * i) / fact(2 * i);
		i++;
	}
	return sum;
}

int main() {
	int n = 0;
	int m = 0;
	double x;
	cout << "This program calculates permutations\n";

	while (!(n > m)) {
		cout << "Enter the number of all elements: ";
		cin >> n;
		cout << "Enter the number of positions to calculate: ";
		cin >> m;
	}

	cout << "There are " << permute(n, m) << " permutations of given set of numbers";

	_getch();
	system("cls");

	cout << "Now, let's compute sin(x) and cos(x) using Taylor series (Asan lox ne zhaesh chto eto takoe, idi otrkoi uchebnik po matanu za pervyi kurs)\n";
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "sin(x) is: " << sinx(x) << "\n";
	cout << "cos(x) is: " << cosx(x) << "\n";


	_getch();
	return 0;
}
