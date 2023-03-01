#include <iostream>

using namespace std;

void Alpaca() {
	float s, r;			
	cin >> s >> r;
	s *= s;
	r = 3.14 * r * r;
	if (s > r) {
		cout << "SQUARE" << endl;
	}
	else cout << "CIRCLE" << endl;
}