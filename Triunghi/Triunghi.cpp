#include "Triunghi.h"
#include <iostream>

using namespace std;

int main() {
	unsigned int x, x0, x1, x2, x3;
	cin >> x;

	x0 = x % 10; // reținem cifra unităților
	x = x / 10;  // eliminăm cifra unităților

	x1 = x % 10; // reținem cifra zecilor
	x = x / 10;  // eliminăm cifra zecilor

	x2 = x % 10; // reținem cifra sutelor
	x = x / 10;  // eliminăm cifra sutelor

	x3 = x % 10; // reținem cifra miilor
	x = x / 10;  // în x rămâne cifra zecilor de mii

	cout << "  " << x2 << endl;
	cout << " " << x3 << x2 << x1 << endl;
	cout << x << x3 << x2 << x1 << x0 << endl;

	return 0;
}
