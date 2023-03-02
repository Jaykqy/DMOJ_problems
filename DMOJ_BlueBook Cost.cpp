#include <iostream>

using namespace std;

void Cost() {
	int test;													// number of test cases
	int weight;													// stores weight
	cin >> test;												// input number of test cases
	for (int i = 0; i < test; i++) {							// run the test cases
		cin >> weight;											// input weight at beginning of each test case
		if (0 <= weight && weight <= 30)						// if weight is from 0 to 30 
			cout << 38 << endl;									// output cost

		if (30 < weight && weight <= 50)						// if weight is from 31 to 50
			cout << 55 << endl;									// output cost

		if (50 < weight && weight <= 100)						// if weight is from 51 to 100	
			cout << 73 << endl;									// output cost

		if (weight > 100) {										// if weight is more than 100
			weight -= 100;										// cost is 73 + additional 24 for every extra 50
			if (weight % 50 > 0) {								// if there is a remainder after dividing by 50
				weight /= 50;									// store how many times 50 can be divided
				weight += 1;									// add one because remainder means weight goes into the next 50
				cout << 73 + (weight * 24) << endl;				// calculate cost and output
			}
			else {												// if weight divides evenly by 50
				weight /= 50;
				cout << 73 + (weight * 24) << endl;				// calculate cost and output
			}
		}
	}
}