#include <iostream>
using namespace std;

int main()
{
	int n = 0, k = 0, d = 0;
	cin >> n;
	cin >> k;
	cin >> d;
	for (int i = 0; i < d; i++) {
			n = n * k;
	}
	cout << n << endl;
	
	
}
