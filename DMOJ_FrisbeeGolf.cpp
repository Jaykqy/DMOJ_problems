#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int disks[7]{ 1, 5, 10, 50, 100, 500, 1000 };
	int disk = 6;
	long long  int throws[7]{ 0 };
	long long int distance;
	cin >> distance;
	while  (distance > 0) {
		if (distance < disks[disk]) {
			disk--;
		}
		if (distance >= disks[disk]) {
			throws[disk] = distance / disks[disk];
			distance = distance % disks[disk];
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << throws[i] << " ";
	}
	cout << throws[6] << endl;
}
