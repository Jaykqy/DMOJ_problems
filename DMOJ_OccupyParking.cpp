#include <iostream>
using namespace std;

int main()
{
	int spaces   = 0;
	int occupied = 0;
	string day1;
	string day2;
	cin >> spaces >> day1 >> day2;
	for (int i = 0; i < spaces; i++) {
		if ( (day1[i] == 'C') && (day2[i] == 'C') ) {
			occupied++;
		}
	}
	cout << occupied << endl;

}
