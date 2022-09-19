#include <iostream>
using namespace std;

int main()
{
	double n, t, price, k = 0;
	double discount = 0;
	cin >> n;
	cin >> t;
	for (int i = 0; i < n; i++) {
		cin >> price >> discount;
		discount = price * (discount / 100);
		if (price - discount <= t) {
			k++;
		}
	}
	cout << k << endl;
}
