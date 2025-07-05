#include <stdio.h>

int corbinNumber = 38;

int* numberPointer = &corbinNumber;

int main() {
	printf("This is the value of the variable corbinNumber: %d\n", corbinNumber);
	printf("This is the value of the variable numberPointer: %p\n", numberPointer);
	*numberPointer;
	printf("The variable numberPointer has been dereferenced; its value is now: %d\n");
	return 0;
}