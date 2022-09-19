#include <iostream>
using namespace std;

int main()
{

	int cointypes[4] { 1, 5, 10, 25 };
	int disk = 3;
	int throws[4]{ 0 };
	int distance;
	cin >> distance;
	if (distance > 1) {
		cout << distance << " cents requires ";
	}
	else {
		cout << distance << " cent requires ";
	}
	while (distance > 0) {
		if (distance < cointypes[disk]) {
			disk--;
		}
		if (distance >= cointypes[disk]) {
			throws[disk] = distance / cointypes[disk];
			distance = distance % cointypes[disk];
		}
	}
																	//quarter section
	if (throws[3] != 0 && (throws[2] != 0 || throws[1] != 0 || throws[0] != 0)) {
		if (throws[3] > 1) {
			cout << throws[3] << " quarters, ";
		}
		if (throws[3] == 1) {
			cout << throws[3] << " quarter, ";
		}
	}
	else {
		if (throws[3] == 1) cout << throws[3] << " quarter." << endl;
		if (throws[3] > 1) cout << throws[3] << " quarters." << endl;
	}
																	//dime section
	if (throws[2] != 0 && (throws[1] != 0 || throws[0] != 0)) {
		if (throws[2] > 1) {
			cout << throws[2] << " dimes, ";
		}
		if (throws[2] == 1 && (throws[1] !=0 || throws[0] !=0)) {
			cout << throws[2] << " dime, ";
		}
	}
	else {
		if (throws[2] == 1) cout << throws[2] << " dime." << endl;
		if (throws[2] > 1) cout << throws[2] << " dimes." << endl;
	}
																	//nickel section
	if (throws[1] != 0 && throws[0] != 0) {
		if (throws[1] > 1) {
			cout << throws[1] << " nickels, ";
		}
		if (throws[1] == 1) {
			cout << throws[1] << " nickel, ";
		}
	}
	else {
		if (throws[1] == 1) cout << throws[1] << " nickel." << endl;
		if (throws[1] > 1) cout << throws[1] << " nickels." << endl;
	}
																	//cent section
	if (throws[0] != 0) {
		if (throws[0] > 1) {
			cout << throws[0] << " cents.";
		}
		if (throws[0] == 1) {
			cout << throws[0] << " cent.";
		}
	}
} 