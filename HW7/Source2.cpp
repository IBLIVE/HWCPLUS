#include <iostream>
#include <cstring>
#include <cctype>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;

int main() {

	char str[100];
	char t;
	cout << "Enter the line:";
	cin.getline(str, 99);
	for (int i = 0; i < strlen(str) / 2; i++) {
		t = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = str[i];
		str[i] = t;
	}
	cout << str << endl;
	cout << endl;

	bool inword = false;
	bool word = false;
	int numberA = 0;

	for (int i(0); str[i] != '\0'; i++) {
		if (isalpha(str[i]) && (!inword)) {
			inword = true;
			word = false;
		}
		if (!isalpha(str[i])) {
			inword = false;
		}
		if ((str[i] == 'a' || str[i] == 'A')&&(!word)) {
			word = true;
			numberA++;
		}
	}
	cout << "A letter 'a' is seen in " << numberA << " words.";
	
	_getch();
	return 0;
}