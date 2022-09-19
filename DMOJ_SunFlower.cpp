#include <iostream>

using namespace std;

int main()
{
	 
	int length = 0;
	int least = 0;
	cin >> length;

	int** flower = new int*[length];
	for (int i = 0; i < length; i++) {						// creating array for flowerbed
		flower[i] = new int[length];
	}

	for (int i = 0; i < length; i++) {
		for (int k = 0; k < length; k++) {
			cin >> flower[i][k];
		}
	}

	least = min(flower[0][0], flower[0]  [length - 1]);
	least = min(least, flower[length - 1][length - 1]);
	least = min(least, flower[length - 1][     0    ]);

	if (least == flower[0][0]) {							// the case where no rotations are needed
		for     (int i = 0; i < length; i++) {
			for (int k = 0; k < length; k++) {
				cout << flower[i][k] << " ";
			}
			cout << endl;
		}
	}

	if (least == flower[0][length - 1]) {					// the case with one rotation 
		for     (int i = length-1; i >=0; i--) {
			for (int k = 0; k < length; k++) {
				cout << flower[k][i] << " ";
			}
			cout << endl;
		}
	}

	if (least == flower[length - 1][length - 1]) {			// the case with two rotations
		for     (int i = length-1; i >=0; i--) {
			for (int k = length-1; k >=0; k--) {
				cout << flower[i][k] << " ";
			}
			cout << endl;
		}
	}

	if (least == flower[length - 1][0]) {
		for (int i = 0; i < length; i++) {
			for (int k = length - 1; k >= 0; k--) {			// the case with three rotations
				cout << flower[k][i] << " ";
			}
			cout << endl;
		}

	}
}
