#include <iostream>

int main() { 
	using namespace std;

	int nInt = 5;
	const int aConst = 33;

	int *d = &nInt;
	d++;
	// now d is a pointer to constant aConst
	cout << "*d=" << *d << endl;

	if (&aConst == d) {
		cout << "it's a pointer to const" << endl;
		cout << "&aConst=" << &aConst << endl;
		cout << "d=" << d << endl;
	}

	*d = 8; // we change the value of constant, but aConst is not changed

	cout << "aConst=" << aConst << endl;
	cout << "*d=" << *d << endl;

	return 0;
} 

