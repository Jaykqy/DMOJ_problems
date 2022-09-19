#include <iostream>
using namespace std;

int main()
{

	int r = 0, g = 0, b = 0, n = 0, pink = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> r >> g >> b;
		if (r >= 240 && r <= 255 && g >= 0 && g <= 200 && b >= 95 && b <= 220) {
			pink++;
		}

	}
	cout << pink << endl;

}
