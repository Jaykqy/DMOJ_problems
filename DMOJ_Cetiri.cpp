#include <iostream>
#include <vector>

using namespace std;

void Bubble(vector <int> &bubble) {						// bubble sort function to sort a vector	
	int length;											// from smallest to largest
	int holder;
	length = bubble.size();
	for (int pass = 1; pass < length; pass++) {
		for (int i = 0; i < length - 1; i++) {

			if (bubble[i] > bubble[i + 1]) {			//swapping the values of two indexes if 1st > 2nd
				holder = bubble[i + 1];
				bubble[i + 1] = bubble[i];
				bubble[i] = holder;
			}
		}
	}
}

void Cetiri() {
	vector <int> num;
	int temp;											// variable to temporarily store input
	for (int i = 0; i < 3; i++) {
		cin >> temp;
		num.push_back(temp);							// insert variable into new space in vector 
	}
	Bubble(num);										// sort vector from smallest to largest
	int d1, d2;
	d1 = num[1] - num[0];								// find difference between values
	d2 = num[2] - num[1];
	if (d1 > d2) {										// if the first difference is greatest
		num[0] += d2;
		cout << num[0] << endl;							// the missing num is between the first two	
		return;											// numbers in the sequence	
	}
	if (d2 > d1) {										// if the second difference is greatest
		num[1] += d1;
		cout << num[1] << endl;							// the missing num is bewteen the last two
		return;											// numbers in the sequence
	}
	if (d1 == d2) cout << num[2] + d1 << endl;			// if difference is common output next value in sequence	
}