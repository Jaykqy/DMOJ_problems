#include <iostream>

using namespace std;

void Direction() {
	short int cases;											// num of test cases
	short int heading;										// direction in degrees
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> heading;
		if (heading >= 0 && heading <= 45) {
			cout << "N" << endl;
		}
		if (heading >= 315) {
			cout << "N" << endl;
		}
		if (heading > 45 && heading <= 135) {
			cout << "E" << endl;
		}
		if (heading > 135 && heading <= 225) {
			cout << "S" << endl;
		}
		if (heading > 225 && heading < 315) {
			cout << "W" << endl;
		}
	}
}