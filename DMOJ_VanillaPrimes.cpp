#include <iostream>
using namespace std;


int main()
{
	int num;
	cin >> num;
	int check = 0;
	if (num > 1 && num < 4) {
		cout << "prime" << endl;
		return 0;
	}
	if (num < 2) {
		cout << "not" << endl;
		return 0;
	}
	if (num > 0) {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				cout << "not" << endl;
				check++;
				return 0;
			}
		}
	}
	if (check == 0) cout << "prime" << endl;
}
