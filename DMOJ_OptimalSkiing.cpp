#include <iostream>
using namespace std;

int main()
{
	int n, m, num = 0, total = 0;
	long int small = 20200000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		total = 0;
		num = 0;
		for (int j = 0; j < m; j++) {
			cin >> num;
			total = total + num;
		}
		if (small > total) {
			small = total;
		}
	}
	cout << small << endl;
}