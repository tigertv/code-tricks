#include <stdio.h>

int main() {
	int *a1, *b1, *c1; // a1, b1 and c1 are pointers to int
	int* a2, b2, c2; // a2 is a pointer to int, b2 and c2 are ints

	a1 = 1; a2 = 1;
	b1 = 2; b2 = 2;
	c1 = 3; c2 = 3;
	

	printf("a1=%p\n", a1);
	printf("a1=%p\n", &a1);
	printf("a2=%i\n", a2);

	printf("\n");
	if (b1 == b2) printf("b1 == b2 is true\n\n");

	printf("b1=%i\n", b1);
	printf("b2=%i\n", b2);

	printf("\n");
	
	printf("c1=%i\n", c1);
	printf("c2=%i\n", c2);

	printf("\n");

	return 0;
}
