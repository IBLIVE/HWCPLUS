#include <iostream>
#include <conio.h>
#include <cstring>
#include <fstream>

using namespace std;

struct Point {
	int y;
	int x;
};

struct Rectangle {
	Point A;
	Point B;
};

void Menu() {
	cout << "1. Open file \n";
	cout << "2. Make file \n";
	cout << "3. Read values from a file\n";
	cout << "4. Write in a file\n";
	cout << "5. Write in a console\n";
	cout << "6. Print an info\n";
	cout << "q - out\n";
}

void Write(ostream& out, Rectangle& rect) {
	int x1, x2, y1, y2;
	cout << "Enter 1st point coordinates: ";
	cin >> x1;
	cin >> y1;
	out << x1;
	out << y1;
	cout << "Enter 2nd point coordiantes: ";
	cin >> x2;
	cin >> y2;
	out << x2;
	out << y2;

	rect.A.x = x1; 
	rect.A.y = y1;
	rect.B.x = x2;
	rect.B.y = y2;
	_getch();

}
void Read(ofstream& out, Rectangle& rect) {
	out << rect.A.x << rect.A.y << endl;
	out << rect.B.x << rect.B.y << endl;
}

void PrintInfo(Rectangle& rect) {
	system("cls");
	cout << "Rectangle\n";
	cout << "x1 = " << rect.A.x << " y1 = " << rect.A.y << endl;
	cout << "x2 = " << rect.B.x << " y2 = " << rect.B.y << endl;

	int width, length;
	width = abs(rect.A.x - rect.B.x);
	length = abs(rect.A.y - rect.B.y);

	int perimeter = (width + length) * 2;
	int area = width * length;

	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;

	_getch();
}

int main() {
	char choice;
	char* filename = new char[30];

	ifstream in;
	ofstream out;
	Rectangle rect;

	bool fileinput = 0;
	bool fileread = 0;

	do {
		Menu();
		cin >> choice;

		switch (choice) {

		case '1': //Open file
				cout << "Enter file name: \n";
				cin >> filename;
				in.open(filename);
				if (!in.is_open()) {
					cout << "Wrong file name\n";
					fileinput = 0;
					_getch();
					break;
				}
				else {
					fileinput = true;
					break;
				}

		case '2': //make file
				cout << "Enter file name: \n";
				cin >> filename;
				out.open(filename, ios::app);
				break;
			
		case '3': //read from file
				if(!fileinput){
					break;
				}
				Read(out, rect);
				fileread = true;
				break;
		case '4': //write in file
				if (out.is_open() && fileinput) {
					Write(out, rect);
				}
				else {
					cout << "\nChoose file first;";
				}
				_getch();
				break;
		case '5' : //write in console
				cout << "Enter two opposite points: ";
				Write(cout, rect);
				fileread = true;
				break;

		case '6': //print info
			if (fileread) {
				PrintInfo(rect);
			}
			break;
		}
		system("cls");
	} while (choice != 'q');
	_getch();
	return 0;
}