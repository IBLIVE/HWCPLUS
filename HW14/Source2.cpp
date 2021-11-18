#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;

struct clocks 
{
	int hours;
	int minutes;
};

clocks sum(clocks arr[]) {
	clocks temp;
	temp.minutes = (arr[0].minutes + arr[1].minutes) % 60;
	temp.hours = ((arr[0].minutes + arr[1].minutes) / 60 + (arr[0].hours + arr[1].hours) % 24);

	return temp;
}

int main() {
	clocks time[2];
	clocks res;

	for (int i = 0; i < 2; i++) {
		cout << "Enter hours: ";
		cin >> time[i].hours;
		cout << "Enter minutes: ";
		cin >> time[i].minutes;
	}

	res = sum(time);

	cout << "\n" << res.hours << ":" << res.minutes;

	_getch();

	return 0;
}