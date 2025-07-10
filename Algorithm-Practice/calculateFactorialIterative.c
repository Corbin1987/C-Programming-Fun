#include <stdio.h>

int calculateFactorial (int numberToFactorial) {
	int count = numberToFactorial;
	for (int i = 1; i < count; i ++) {
		numberToFactorial *= i;
	}
	return (int) numberToFactorial;
}

int main () {
	int factorialOfFive = calculateFactorial(5);
	int factorialOfSix = calculateFactorial(6);
	int factorialOfSeven = calculateFactorial(7);
	int factorialOfEight = calculateFactorial(8);
	int factorialOfNine = calculateFactorial(9);
	int factorialOfTen = calculateFactorial(10);
	printf("Factorial of 5: %d\n", factorialOfFive);
	printf("Factorial of 6: %d\n", factorialOfSix);
	printf("Factorial of 7: %d\n", factorialOfSeven);
	printf("Factorial of 8: %d\n", factorialOfEight);
	printf("Factorial of 9: %d\n", factorialOfNine);
	printf("Factorial of 10: %d\n", factorialOfTen);
	return 0;
}