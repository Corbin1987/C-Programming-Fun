#include <stdio.h>

//gather input

//validate input as array of integers

//iterate through array

//find minimum value

//output minimum value

int findMinimumValueInArray(int arrayToCheck[], int arrayLength) {
	if (arrayLength == 0) {
		printf("The input array does not contain any data.\n");
		return 0;
	}

	int minimumValue = arrayToCheck[0];

	for (int i = 0; i < arrayLength; i ++) {
		printf("Loop iteration: %d", i);
		if (arrayToCheck[i] < minimumValue) {
			minimumValue = arrayToCheck[i];
			printf("If statement met\n");
		}
	}
	return minimumValue;
}

int main() {
	int testarray[] = {2, 3, 4, 5, 1};
	int arrayLength = sizeof(testarray) / sizeof(testarray[0]);
	int result = findMinimumValueInArray(testarray, arrayLength);
	printf("%d\n", result);
	return 0;
}