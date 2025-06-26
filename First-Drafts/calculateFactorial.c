#include <stdio.h>

// Given a whole integer, calculate and return the factorial value
//e.g., 5! = (5 x 4 x 3 x 2 x 1)

int calculateFactorial (int numberToFactorial) {
	int factorialResult = 1;
	if (numberToFactorial == 0) {
		return factorialResult;
	}
	if (numberToFactorial > 0) {
		return factorialResult * calculateFactorial(numberToFactorial - 1);
	}
}

int main () {
	int result = calculateFactorial(5);
	printf("%d\n", result);
}