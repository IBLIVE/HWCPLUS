#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int gcd, lcm, x, y, x1, y1;

	cin >> x >> y;
	x1 = x;
	y1 = y;
	while (x != 0 && y!=0) {
		if (x > y) {
			gcd = y;
			x = x % y;
		}
		else {
			gcd = x;
			y = y % x;
		}
	}
	lcm = x1* y1 / gcd;
	cout << "gcd is " << gcd << endl;
	cout << "lcm is " << lcm << endl;
	_getch();
	return 0;


}
