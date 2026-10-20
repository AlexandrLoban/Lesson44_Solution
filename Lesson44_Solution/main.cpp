#include "logic.h"

int main() {
	
	int marks[SIZE];

	cout << "Input students marks: ";
	for (int i = 0; i < SIZE; i++) {

		cin >> marks[i];
	}

	double avg = calulate_average(marks);

	cout << "Result: " << avg << endl;

	return 0;
}