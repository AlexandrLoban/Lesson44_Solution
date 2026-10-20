#include "logic.h"

double calulate_average(int marks[SIZE]) {
	double sum = 0;

	for (int i = 0; i < SIZE; i++) {
		sum += marks[i];
	}

	return sum / SIZE;
}