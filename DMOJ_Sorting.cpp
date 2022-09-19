#include <iostream>
using namespace std;

void sort(int bubble[100], int length) {
	int holder;
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

int main()
{
	int num[100]{ 0 };
	int length = 0;
	cin >> length;
	for (int i = 0; i < length; i++) {
		cin >> num[i];
	}
	sort(num, length);
	for (int x = 0; x < length; x++) {
		cout << num[x] << endl;
	}
}
