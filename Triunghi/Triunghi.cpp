#include "Triunghi.h"
#include <iostream>

using namespace std;

int main() {
	unsigned int x, x0, x1, x2, x3, x4, x5;
	cin >> x;

	x0 = x % 10;
	x = x / 10;

	x1 = x % 10;
	x = x / 10;

	x2 = x % 10;
	x = x / 10;

	x3 = x % 10;
	x = x / 10;

	x4 = x % 10;
	x = x / 10;

	x5 = x % 10;
	x = x / 10; // x cifra zecilor de mii

	cout << "     " << x5 << endl;
	cout << "    " << x5 << " " << x4 << endl;
	cout << "   " << x5 << " " << x4 << " " << x3 << endl;
	cout << "  " << x5 << " " << x4 << " " << x3 << " " << x2 << endl;
	cout << " " << x5 << " " << x4 << " " << x3 << " " << x2 << " " << x1 << endl;
	cout << x5 << " " << x4 << " " << x3 << " " << x2 << " " << x1 << " " << x0 << endl;

	return 0;
}
