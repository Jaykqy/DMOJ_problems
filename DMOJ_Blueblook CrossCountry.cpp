#include <iostream>
#include <string>
using namespace std;

void CrossCountry() {
	string code;
	getline(cin, code);
	if (code == "MG") {
		cout << "midget girls" << endl;
		return;
	}
	if (code == "MB") {
		cout << "midget boys"  << endl;
		return;
	}
	if (code == "JG") {
		cout << "junior girls" << endl;
		return;
	}
	if (code == "JB") {
		cout << "junior boys"  << endl;
		return;
	}
	if (code == "SG") {
		cout << "senior girls" << endl;
		return;
	}
	if (code == "SB") {
		cout << "senior boys"  << endl;
		return;
	}
	else
		cout << "invalid code" << endl;
}