#include <iostream>

using namespace std;

void ModInverse() {
	short int x, m;												// variables to store input
	cin >> x >> m;
	for (int i = 1; i < m; i++) {								// check all possible numbers
		if ((x * i) % m == 1) {									// if condition is true, the inverse mod is found
			cout << i << endl;									// output inverse mod
			return;												// end program
		}
	}
	cout << "No such integer exists." << endl;					// if no possible answer, output msg
}

int ModInverse_Rec(int x, int m, int n) {						// same as above function but recursive
	if (n >= m) {
		cout << "No such integer exists." << endl;
		return 0;
	}
	if ((x * n) % m == 1) return n;
	else ModInverse_Rec(x, m, n + 1);
}