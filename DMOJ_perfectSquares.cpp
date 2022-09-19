#include <iostream>
using namespace std;

int main()
{

	int a = 0, b = 0, tester = 0, square = 0;
	cin >> a;
	cin >> b;
	for (int i = a; i <= b; i++) {
		if (tester * tester >= a && tester * tester <= b) {
			square++;
		}
		tester++;
	}
	cout << square << endl;

}
