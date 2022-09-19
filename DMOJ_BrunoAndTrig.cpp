#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c) {
		if (b + c > a) {
			cout << "Huh? A triangle?";
			return 0;
		}
		else {
			cout << "Maybe I should go out to sea..." << endl;
			return 0;
		}
	}
	if (b > a && b > c) {
		if (a + c > b) {
			cout << "Huh? A triangle?";
			return 0;
		}
		else {
			cout << "Maybe I should go out to sea..." << endl;
			return 0;
		}
	}
	if (c > b && c > a) {
		if (b + a > c) {
			cout << "Huh? A triangle?";
			return 0;
		}
		else {
			cout << "Maybe I should go out to sea..." << endl;
			return 0;
		}
	}
	else {
			cout << "Maybe I should go out to sea..." << endl;

	}
}
