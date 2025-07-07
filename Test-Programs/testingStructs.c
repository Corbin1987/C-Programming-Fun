#include <stdio.h>

struct myCar {
	int modelYear;
	char * make;
	char * model;	
};

int main() {
	struct myCar myHonda;
	myHonda.modelYear = 2003;
	myHonda.make = "Honda";
	myHonda.model = "CR-V";
	printf("Year: %i\nMake: %s\nModel: %s\n", myHonda.modelYear, myHonda.make, myHonda.model);
	return 0;
}