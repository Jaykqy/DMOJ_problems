#include <iostream>
#include <cmath>
using namespace std;

void baseTen(int base, long long int& num, int endbase)
{
	long long int dec = 0, i = 0, rem;

	while (num != 0) {
		rem = num % endbase;
		num /= endbase;
		dec += rem * pow(base, i);
		++i;
	}
	num = dec;
	cout << num << endl;
}

int main()
{
	long long int base, num, base2, num2, converted;

	for (int i = 0; i < 5; i++) {

		cin >> num >> base;
		cin >> num2 >> base2;
		cin >> converted;

		baseTen(base, num, converted);
		baseTen(base2, num2, converted);

		num = num * num2;
		cout << num << endl;
	}
}
