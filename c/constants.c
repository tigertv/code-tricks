#include <stdio.h>

int main() { 
	int nInt = 5;
	const int aConst = 33;

	int *d = &nInt;
	d++;
	// now d is a pointer to constant aConst
	printf("*d=%i\n", *d);

	if (&aConst == d) {
		printf("it's a pointer to const\n");
		printf("&aConst=%p\n", &aConst);
		printf("&d=%p\n", d);
	}

	*d = 8;

	printf("aConst=%i\n", aConst);
	printf("*d=%i\n", *d);

	return 0;
} 

