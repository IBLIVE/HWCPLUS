#include <iostream>
#include <conio.h>

using namespace ::std;

int main() {
	double C, F;
	cout << "Enter Farenheit value: ";
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "Celsius value is " << C;

	_getch();
	return 0;
}
