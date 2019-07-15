#include <iostream>
#include <string>

using namespace std;

void print_line() {
	cout << "----------------------------------" << endl;
}

int main()
{
	int a[] = {0, 1, 2, 3, 4};
	int b = 3;
	int c = 3;
	int d[] = {5, 6, 7, 8, 9};
	int e[] = {10, 11, 12, 13, 14};

	cout << "a[] = {";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ",";
	}
	cout << "}" << endl;

	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << "d[] = {";
	for (int i = 0; i < 5; i++) {
		cout << d[i] << ",";
	}
	cout << "}" << endl;

	cout << "e[] = {";
	for (int i = 0; i < 5; i++) {
		cout << e[i] << ",";
	}
	cout << "}" << endl;

	print_line();

	cout << "b[a] = " << b[a] << endl;
	cout << "(c+b)[a] = " << (c+b)[a] << endl;
	cout << "d[3][a] = " << d[3][a] << endl;
	cout << "d[c][a] = " << d[c][a] << endl;
	cout << "c[d][a] = " << c[d][a] << endl;
	cout << "d[e[0]][a] = " << d[e[0]][a] << endl;
	cout << "4+0[e][d] = " << 4+0[e][d] << endl;

	if (b[a] == a[b]) {
		cout << "b[a] == a[b]" << endl;
	} else {
		cout << "b[a] != a[b]" << endl;
	}

	cout << "3*0[e][d] = " << 3*0[e][d] << endl;
	cout << "3*0[e][d] = " << 3*0[e][d] << endl;
	cout << "d[-3] = " << d[-3] << endl;

	print_line();

	for (int i=-10; i<10; i++) {
		cout << "d[" << i << "] = " << d[i] << endl;
	}

	print_line();

	return 0;
}
