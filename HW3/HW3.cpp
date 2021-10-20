#include <iostream>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int sec, h, m, t;
	cout << "Enter seconds: ";
	cin >> t;

	h = t / 3600;
	m = (t - 3600 * h) / 60;
	sec = t - h * 3600 - m * 60;

	cout << "Time: " << h << ":" << m << ":" << sec << endl;
	_getch();
	return 0;
}
