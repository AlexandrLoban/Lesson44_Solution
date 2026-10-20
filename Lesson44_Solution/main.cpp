#include "logic.h"

int main() {
	int mark1, mark2, mark3;

	cout << "Input student's marks: ";
	cin >> mark1 >> mark2 >> mark3;

	cout << "average mark: " << calulate_average(mark1, mark2, mark3) << endl;

	return 0;
}