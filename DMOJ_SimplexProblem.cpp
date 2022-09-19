#include <iostream>
using namespace std;

int main()
{
	int cacti = 0, matroid = 0, kount = 0, happiness;
	cin >> cacti >> matroid >> kount;
	if (cacti >= matroid) {
		happiness = cacti * kount;
		cout << happiness << endl;
	}
	if (matroid > cacti) {
		happiness = matroid * kount;
		cout << happiness << endl;
	}
}
