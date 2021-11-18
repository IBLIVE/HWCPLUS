#include <iostream>
#include <conio.h>

using namespace std;

struct A {
	int num;
};

struct Stack {
	A a;
	Stack* next;
};



void Print(Stack* b) {
	Stack* print = b;
	while (print) {
		cout << print->a.num << " -> ";
		print = print->next;
	}
	cout << "NULL\n";
}

void push(Stack** b, int n) {
	Stack* pre = new Stack;
	pre->a.num = n;
	pre->next = *b;
	*b = pre;
}

int pop(Stack** b) {
	int temp = (*b)->a.num;
	Stack* follow = (*b);
	(*b) = (*b)->next;
	delete follow;
	return temp;
}

int main() {
	Stack* begin = NULL;

	cout << "For beginning, we will fill the stack;\n";
	for (int i(0); i < 5; i++) {
		push(&begin, i);
	}
	Print(begin);
	_getch();

	cout << "\nNow, let's pop our stack;\n";
	for (int i(0); i < 5; i++) {
		cout << pop(&begin) << '\n';
	}

	_getch();
	return 0;
}