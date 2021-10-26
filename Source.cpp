#include <conio.h>
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
	long long power=1, result=1, threshold;

	cout << "to which power should we go?"<<endl;
	cin >> threshold; 

	do {
		for (int i = 1; i <= power; i++) {
			result = result * 2;
		}
		cout << "2 in a power of " << power << " is equal to " << result << endl;
		power++;
		result = 1;
	} while (power <= threshold);

	_getch();
	return 0;
}