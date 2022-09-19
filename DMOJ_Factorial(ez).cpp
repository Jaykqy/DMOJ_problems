#include <iostream>
#include <cmath>
using namespace std;

const long int mod = pow(2, 32) - 1;

long long int factorial(long long int num)
{
	long long int f = 1;
	for (long long int i = 1; i <= num; i++) {
		f = f * i;
		f = f & mod;
	}
	return f;
}


int main()
{
	int cases;
	long long int num;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> num;
		cout << factorial(num) << endl;
	}
}
