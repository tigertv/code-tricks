#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a[] = {0,1,2,3,4};
	int b = 3;
	int c = 3;
	int d[] = {0,1,2,3,4};
	int e[] = {3,1,2,3,4};

	b[a] = 1;
	cout << b[a] << endl;

	(c+b)[a] = 2;
	cout << (c+b)[a] << endl;

	d[3][a] = 3;
	cout << d[3][a] << endl;
	
	d[c][a] = 4;
	cout << d[c][a] << endl;

	c[d][a] = 5;
	cout << c[d][a] << endl;

	d[e[0]][a] = 6;
	cout << d[e[0]][a] << endl;

	b = 4+0[e][d];
	cout << b << endl;

	if (b[a] == a[b]) {
		cout << 8 << endl;
	} else {
		cout << 0 << endl;
	}

	b = 3*0[e][d];
	cout << b << endl;

	d[-7] = 10;
	cout << d[-7] << endl;

	cout << "----------------------------------" << endl;

	for (int i=-7; i<7; i++) {
		cout << d[i] << endl;
	}

	cout << "----------------------------------" << endl;

	return 0;
}
