#include <iostream>
#include <conio.h>

using namespace std;

struct A {
	int num;
};

struct List {
	A a;
	List* next;
};

void Add_End(List** b, const A& a) {
	List* t = new List;
	t->a = a;

	if (*b == NULL) {
		t->next = NULL;
		*b = t;
		return;
	}

	List* t1 = *b;
	while (t1->next != NULL) {
		t1 = t1->next;
	}

	t1->next = new List;
	t1 = t1->next;
	t1->a = a;
	t1->next = NULL;
}

void Add_Begin(List** b, const A& a) {
	List* t = new List;
	t->a = a;
	t->next = *b;
	*b = t;
}

void Print(List* b) {

	while (b) {
		cout << b->a.num << " -> ";
		b = b->next;
	}
	cout << "NULL\n";
}

void Insert(List** b, const A& a) {
	List* ins = new List;
	ins->a = a;
	List* t = *b;

	if (t->a.num >= ins->a.num) {
		ins->next = t;
		*b = ins;
		return;
	}

	List* t1 = t->next;

	while (t1) {
		if (t->a.num <= ins->a.num && t1->a.num >= ins->a.num) {
			t->next = ins;
			ins->next = t1;
			return;
		}
		t = t1;
		t1 = t1->next;
	}
}

void Init(List** begin) {
	A a[5] = { 13, 24, 30, 42, 84 };

	(*begin)->a.num = 5;
	(*begin)->next = NULL;

	List* end = *begin;

	for (int i(0); i < 5; i++) {
		end->next = new List;
		end = end->next;
		end->a = a[i];
		end->next = NULL;
	}
}

void Delete(List** b, A& a) {

	if (*b == NULL) {
		return;
	}

	List* t = *b;

	if (t->a.num == a.num) {
		*b = t->next;
		delete t;
		return;
	}

	List* t1 = t->next;

	while (t1) {
		if (t1->a.num == a.num) {
			t->next = t1->next;
			delete t1;
			return;
		}
		t = t1;
		t1 = t1->next;
	}
}

int main() {
	List* begin = NULL;
	begin = new List;
	A a = { 2 };
	A n = { 100 }; 
	A q;

	cout << "\nLet's initialize the list;\n";
	Init(&begin);
	Print(begin);
	_getch();

	cout << "\nNow we add a value to the start;\n";
	Add_Begin(&begin, a);
	Print(begin);
	_getch();

	cout << "\nNext, we will add a value to the end;\n";
	Add_End(&begin, n);
	Print(begin);
	_getch();
	
	cout << "\nHow about we insert a value inside the list? Enter the value: ";
	cin >> q.num;
	Insert(&begin, q);
	Print(begin);
	_getch();

	cout << "\nNow, let's try to delete a value. Enter the value: ";
	cin >> q.num;
	Delete(&begin, q);
	Print(begin);

	_getch();
	return 0;
}