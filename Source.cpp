#include <cmath>
#include <iostream>
#include <conio.h>


using std::cin;
using std::cout;
using std::endl;

int main() {
	double a;
	double b;
	double c;

	cin >> a;
	cin >> b;
	cin >> c;

	cout << "your equation is: " << (int)a << "x^2 + " << (int)b << "x + " << (int)c << endl;

	double D = pow(b, 2) - 4 * a * c;

	if (D < 0) {
		cout << "Roots are complex numbers" << endl;
	}
	else {
		double x1 = (-b - sqrt(D)) / (2 * a);
		double x2 = (-b + sqrt(D)) / (2 * a);
		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2 << endl;
	}
	_getch();
	return 0;
}