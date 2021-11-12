#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include <charconv>

using std::cin;
using std::cout;

char p1[30];
char p2[30];
char field[3][3];
bool turn = 0;

void begin() {
	char pos = '1';
	
	cout << "You are playing in Tic-Tac-Toe game\n";
	cout << "The playing field:\n\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			field[i][j] = pos;
			cout << "| " << field[i][j] << " ";
			pos++;
		}
		cout << "| \n";
	}
	cout << "\nTo select the cell, print its number\n";
	cout << "To start the game, press any button";
	_getch();
}

void game() {

	int n;
	char sign;

	if (turn) {
		cout << "it's " << p1 << "'s turn\n";
		sign = 'X';

	}
	else {
		cout << "it's " << p2 << "'s turn\n";
		sign = 'O';
	}

	turn = (!turn);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "| " << field[i][j] << " ";
		}
		cout << "| \n";
	}

	cout << "The cell to place a sign in is: ";
	cin >> n;

	while ((n > 9 || n < 1)) {
		cout << "\nWrong value. Enter again: ";
		cin >> n;
	}
	
	if (n % 3 == 0) {
		int i = n / 3 - 1;
		int j = 2;
		field[i][j] = sign;
	}
	else {
		int i = n / 3;
		int j = n % 3 - 1;
		field[i][j] = sign;
	}
	
}

bool win() {

	if (field[0][0] == field[1][1] && field[1][1] == field[2][2] || field[0][2] == field[1][1] && field[1][1] == field[2][0]) {
		return true;
	}

	for (int i = 0; i < 3; i++) {
		if (field[i][0] == field[i][1] && field[i][1] == field[i][2] || field[0][i] == field[1][i] && field[1][i] == field[2][i]) {
			return true;
		}
	}

	return false;
}

void result(int counter) {
	if (turn) {
		cout << "it's " << p2 << "'s turn\n";

	}
	else {
		cout << "it's " << p1 << "'s turn\n";
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "| " << field[i][j] << " ";
		}
		cout << "| \n";
	}

	if (counter == 9) {
		cout << "\nDraw!";
	}
	else {
		if (turn) {
			cout << "\n" << p2 << " won!";
		}
		else {
			cout << "\n" << p1 << " won!";
		}

	}
}
int main() {

	int counter = 0;

	begin();
	system("cls");

	cout << "Enter 1st player's name: ";
	cin.getline(p1, 30);
	cout << "Enter 2nd player's name: ";
	cin.getline(p2, 30);
	system("cls");

	cout << "The game has started!\n\n";

	srand(time(NULL));
	if (rand() & 1) {
		turn = true;
	}
	else {
		turn = false;
	}

	while (!win() && counter < 9) {
		counter++;
		system("cls");
		game();
	}

	system("cls");

	result(counter);
	
	_getch();
	return 0;
}