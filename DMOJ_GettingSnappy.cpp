#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void Snappy() {
	int m, n;														// variables for number of papayas and ideal num of papayas
	int closest = 0;												// variable to store closest num of papayas to ideal num
	int diff = INT_MAX;												// variable to store difference between num and ideal num
	vector <int>papaya;												// vector to store all possible amounts of papayas
	cin >> m >> n;													// input papaya amounts
	while (m != 0) {												// while papayas is > 0 there are still more possibilities
		papaya.push_back(m);										// create another index in vector
		if (m == n) {												// if a possibility happens to be the ideal number
			cout << m << endl;										// output the number
			return;													// end the program early
		}
		if (m < n) break;											// once the possibilities are lower than ideal number there is no point it continuing
		m /= 2;														// divide m by 2 for the next possibility
	}
	for (unsigned int i = 0; i < papaya.size(); i++) {				// scan the vector the num closest to ideal number
		if (abs(papaya[i] - n) < diff) {							// if the absolute value is less the there is a new closest number
			closest = papaya[i];									// update closest number variable	
			diff = abs(papaya[i] - n);								// update lowest diff
		}
	}
	cout << closest << endl;										// output answer
}
