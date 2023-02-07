#include <iostream>

using namespace std;

void Ball() {
	int jersey;														// jersey number of goal scorer	
	cin >> jersey;													// 1,2,3,5 | 1,2,4,5 | 1,3,4,5 | 2,3,4,5
	jersey = (jersey - 1) * (jersey - 2) * (jersey - 3);
	jersey /= 6;
	cout << jersey << endl;
}

void Ball_BruteForce() {
	int jersey;														// jersey num of goal scorer
	int num = 0;													// num of possibilities
	cin >> jersey;
	jersey--;
	for (int i = jersey; i > 2; i--) {								// brute force all possibilities
		for (int j = i - 1; j > 1; j--) {
			for (int k = j - 1; k > 0; k--) {
				num++;												// keep track of possibilties
			}
		}
	}
	cout << num << endl;
}