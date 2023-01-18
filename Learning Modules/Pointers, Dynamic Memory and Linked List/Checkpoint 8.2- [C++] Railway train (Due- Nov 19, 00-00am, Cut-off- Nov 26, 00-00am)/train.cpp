#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


struct Car {
	string id;
	Car *next;
};

void appendCar(Car *&head, string id);
void printTrain(Car *&head);

int main() {
	Car *head = NULL;
	int n;
	cin >> n;
	string id;
	for (int i = 0; i < n; i++) {
		cin >> id;
		appendCar(head, id);
	}
	printTrain(head);

	return 0;
}

// Please implement the function appendCar() here.
void appendCar(Car *&head, string id) { //building list forward
	Car * p = new Car;
	if (head==NULL) {
		p->id  = id;
		p->next = head;
		head = p;
	}
	else {
		Car * current = head;  //current pointer here acts like the tail pointer
		while(current->next!=NULL) {
			current = current->next;
		}
		p->id = id;
		p->next = current->next;
		current->next = p;
	}
}

void printTrain(Car *&head) {
	Car *current = head;
	while (current != NULL) {
		if (current->next != NULL) {
			cout << current->id << ", ";
		}
		else {
			cout << current->id;
		}
		current = current->next;
	}
}
