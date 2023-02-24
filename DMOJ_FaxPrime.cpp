#include <iostream>
 
using namespace std;

int numOfDigits_Rec(int a) {									// returns number of digits in a number
	if (a == 0) return 0;										// if the number is 0 then 0 digits
	else return 1 + numOfDigits_Rec(a / 10);					// if greater than zero add one to the digit count
}																// and divide by ten

bool isPrime(int n) {											// returns if a number is prime of not
	if (n <= 1)													// numbers below 2 are not prime
		return false;
	if (n <= 3)													// 2 is a prime number	
		return true;

	if (n % 2 == 0 || n % 3 == 0)								// if divisible to two or three not a prime number
		return false;

	for (long long int i = 5; i * i <= n; i = i + 6)			// go up in increments of 6 to skip multiples of 2 and 3
		if (n % i == 0 || n % (i + 2) == 0)						// with lower values primes number are often 2 apart
			return false;

	return true;
}

void FaxPrime() {
	int num;													// variable to input number
	cin >> num;													// input number
	if (num == 0) {
		cout << "true" << endl;									// and if the num of digits is a prime num
		return;
	}
	if (isPrime(numOfDigits_Rec(num))) {						// using functions from header file to find num of digits 
		cout << "true" << endl;									// and if the num of digits is a prime num
	}
	else cout << "false" << endl;
}