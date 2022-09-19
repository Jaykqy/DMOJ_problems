#include <iostream>
using namespace std;

int main()
{
	string veg;
	int b, p, A = 5, B = 5;
	cin >> b >> p >> veg;
	if (veg == "Y") {
		if (b / B < p && b > 2 && b / 2 >= p) {
			cout << "D" << endl;
			return 0;
		}
		if (b >= 5 && b / B >= p) {
			cout << "B" << endl;
			return 0;
		}
		else {
			cout << "NO PIZZA" << endl;
		}

	}
	if (veg == "N") {
		if (b / A < p && b > 2 && b / 2 >= p) {
			cout << "C" << endl;
			return 0;
		}
		if (b >= 5 && b / A >= p) {
			cout << "A" << endl;
			return 0;
		}
		else {
			cout << "NO PIZZA" << endl;
		}
	}
}
