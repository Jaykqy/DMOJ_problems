#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float r = 0, h = 0;
	float v = 0;
	cin >> r;
	cin >> h;
	v = (3.141 * r * r * h) / 3;
	cout << setprecision(4) << v;
}
