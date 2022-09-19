#include <iostream>
using namespace std;

int main()
{

	int friends = 0;
	int rounds  = 0;
	int elimate = 0;
	cin >> friends >> rounds;
	int people[100]{ 0 };
	for (int j = 1; j <= friends; j++) {
		people[j] = j;
	}
	for (int i = 0; i < rounds; i++) {
		cin >> elimate;
		for (int k = 1; k <= friends; k++) {
			people[elimate * k] = 0;
		}

	}
}
