#include <iostream>
using namespace std;

int main()
{
	int briefcase[10] { 100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000 };
	int banker   = 0;
	int opened   = 0;
	int average  = 0;
	int avgTotal = 1691600;
	int openTotal;
	cin >> opened;
	for (int i = 0; i < opened; i++) {
		cin >> openTotal;
		average += briefcase[openTotal-1];
	}
	avgTotal = avgTotal - average;
	avgTotal = avgTotal / (10 - opened);
	cin >> banker;
	if (banker < avgTotal) {
		cout << "no deal" << endl;
	}
	if (banker > avgTotal) {
		cout << "deal" << endl;
	}
}
