#include <conio.h>
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
		cout << "\n";
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
	
	int i = 0;
	char str1[100] = "Azamat ";
	char str2[30] = "16 let";

	/*cout << "Enter first line: ";
	cin >> str1;
	system("cls");
	cin.clear();

	cout << "Enter second line: ";
	cin >> str2;
	system("cls");
	cin.clear();*/ 
	//Асан, когда будешь чекать, то убери тут скобки и введи значение массивов с консоли.
	//У меня при подобном выводе багалась строка и выводились ненужные элементы, в чем проблема?

	/*while (str1[i] != '\0') {

		cout << str1[i];
		i++;
	}*/ //если захочешь протестить массив после ввода
	cout  << str1 <<"\n";
	cout << str2 << "\n";
	concatenation(str1, str2);
	cout << str1;

	_getch();
	return 0;
}
