#include <iostream>
#include <conio.h>
#include <cstring>
#include <cctype>


using std::cin;
using std::cout;
using std::endl;

int main() {

	char c = '|', c1 = 'z';
	int index = 0; 
	char str[100] = "";
	int vertical = 0;

	do {
		c1 = (char)_getch();
		system("cls");
		if (c1 == 'w' || c1 == 'W') {
			vertical--;
		}
		if (c1 == 's' || c1 == 'S') {
			vertical++;
		}
		if (c1 == 'd' || c1 =='D') {
			for (int i(0); i <= index; i++) {
				if (i != index) {
					str[i] = ' ';
				}
				else {
					str[i] = c;
				}
			}
			str[index + 1] = '\0';
			index++;
		}
		if (c1 == 'a' || c1 == 'A') {
			for (int i(0); i < index; i++) {
				if (i != index-1) {
					str[i] = ' ';
				}
				else {
					str[i] = c;
				}
			}
			str[index] = '\0';
			index--;
		}
		for (int i(0); i < vertical; i++) {
			cout << endl;
		}
		cout << str;
	} while (c1 != 'q');

	

	_getch();
	return 0;
}
