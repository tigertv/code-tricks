#include <stdio.h>

int main() {
	int *a1, *b1, *c1; // a1, b1 and c1 are pointers to int
	int* a2, b2, c2; // a2 is a pointer to int, b2 and c2 are ints

	int *a[5]; // a is an array of size 5 pointers to int 
	int (*b)[]; // b is a pointer on an array of ints
	int (*c)(); // c is a pointer on a function with no arguments returning int
	int (*d[2])(); // d is an array of size 2 pointers to functions returning int 

	int **p1;  //  p1 is a pointer   to a pointer   to an int.
	//int *&p2;  //  ERROR: p2 is a reference to a pointer   to an int.
	//int &*p3;  //  ERROR: Pointer    to a reference is illegal.
	//int &&p4;  //  ERROR: Reference  to a reference is illegal.

	void (*signal(int, void (*fp)(int)))(int); // signal is a function passing an int and a pointer to a function passing an int returning nothing (void) returning a pointer to a function passing an int returning nothing (void)

	char const * const * id; // id is a pointer to a constant pointer to a constant char
	//const double * const &id2; // ERROR

	// m and n have the same type
	const int n=5; 
	int const m=10;

	int * const r = &n;	// r is const pointer to int
	int * const r2;		// r2 is const pointer to int

	typedef char * a4;	// a is a pointer to a char

	typedef a4 b4();	// b is a function that returns
						// a pointer to a char

	typedef b4 *c4;		// c is a pointer to a function
						// that returns a pointer to a char

	typedef c4 d4();	// d is a function returning
						// a pointer to a function
						// that returns a pointer to a char

	typedef d4 *e4;	// e is a pointer to a function 
					// returning  a pointer to a 
					// function that returns a 
					// pointer to a char

	e4 var[10];	// var is an array of 10 pointers to 
				// functions returning pointers to 

	typedef struct tagPOINT
	{
		int x;
		int y;
	}POINT;

	POINT p; /* Valid C code */

	return 0;
}
