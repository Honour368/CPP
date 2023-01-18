// Handling user commands

#include <iostream>
#include <string>
using namespace std;

int myNumbers[100];
int myCount = 0;

void add() {
	int x;
	cin >> x;
	myNumbers[myCount] = x;
	myCount++;
}

void show() {
	for (int i=0; i<myCount; i++) {
		cout << myNumbers[i] << " ";
	}
	cout << endl;
}

void count() {
	cout << myCount << endl;
}

void sum() {
	int sum = 0;
	for (int i=0; i<myCount; i++) {
		sum+=myNumbers[i];
	}
	cout << sum << endl;
}

void average() {
	double sum = 0;
	for (int i=0; i<myCount; i++) {
		sum+=myNumbers[i];
	}
	double avg = sum/myCount;
	cout << avg << endl;
}

int main() {
	string input;
	cin >> input;
	while (input != "exit") {
		if (input == "add") {
			add();
		}
		if (input == "show") {
			show();
		}
		if (input == "count") {
			count();
		}
		if (input == "sum") {
			sum();
		}
		if (input == "average") {
			average();
		}
		cin >> input;
	}
	return 0;
}
