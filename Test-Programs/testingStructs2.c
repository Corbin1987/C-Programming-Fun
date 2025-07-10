#include <stdio.h>

typedef struct {
	char * name;
	char * color;
} cat;

cat o = {"Oreo", "calico"};
cat c = {"Coca-Cola", "grey"};
cat k = {"KitKat", "black"};

int main () {
	printf("My cats are %s, who is %s, %s, who is %s, and %s, who is %s.\n",
		o.name, o.color, c.name, c.color, k.name, k.color
	);
	return 0;
}