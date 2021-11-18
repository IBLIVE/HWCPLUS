#include <conio.h>
#include <iostream>

using namespace std;

struct cars {
	char* name;
	int year;
	int vol;
};
int main() {

	cars a[4];

	for (int i = 0; i < 4; i++) {
		cout << "Enter the name of the car: ";
		a[i].name = new char[20];
		cin.getline(a[i].name, 20);

		cout << "Enter the year of production: ";
		cin >> a[i].year;

		cout << "Enter the volume: ";
		cin >> a[i].vol;

		cin.ignore();

		system("cls");
	}

	for (int i = 0; i < 4; i++) {
		cout << "Name: " << a[i].name << "\n";
		cout << "Year: " << a[i].year << "\n";
		cout << "Volume : " << a[i].vol << "\n\n";
	}

	_getch();
	return 0;
}