//#include <conio.h>
#include <iostream>

using namespace std;

void concatenation(char *str1, char *str2) {
	int i = 0;
	int j = 0;

	while (true) {
		if (str1[i] != '\0') {
			i++;
			continue;
		}
		if (str2[j] != '\0') {
			str1[i] = str2[j];
			i++;
			j++;
		}
		else {
			str1[i] = '\0';
			return;
		}
	}
}
int main() {
	char str1[2000];
	char str2[2000];

	// char str1[100] = "Azamat ";
	// char str2[30] = "16 let";

	cout << "Enter first line: ";
	cin >> str1;

	cout << "Enter second line: ";
	cin >> str2;

	concatenation(str1, str2);


	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;

	//Асан, когда будешь чекать, то убери тут скобки и введи значение массивов с консоли.
	//У меня при подобном выводе багалась строка и выводились ненужные элементы, в чем проблема?

		
	// int i = 0;
	// while (str1[i] != '\0') {
	// 	cout << str1[i];
	// 	i++;
	// }
	//если захочешь протестить массив после ввода


	// cout  << str1 <<"\n";
	// cout << str2 << "\n";



	// cout << str1;

	return 0;
}
