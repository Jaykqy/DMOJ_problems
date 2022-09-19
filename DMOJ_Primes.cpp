#include <iostream>
using namespace std;

bool isPrime(long long int n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (long long int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

int main()
{
	int primes;
	cin >> primes;
	for (int i = 2; i < 100; i++) {
		if (isPrime(i) == true) {
			cout << i << endl;
			primes--;
		}
		if (primes == 0) break;
	}
}
