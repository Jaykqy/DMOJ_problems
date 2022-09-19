#include <iostream>
using namespace std;

int main()
{
	int across = 0, down = 0;
	int hold = 0;
	cin >> across;
	cin >> down;
	hold = across;
	across = across / 2;
	for (int i = 0; i < down; i++) {
		for (int j = 0; j < across; j++) {
			if (i % 2 == 0 ) {
				cout << "01";
			}
			if (i % 2 == 1 ) {
				cout << "10";
			}
		}
		if (i % 2 == 0 && hold % 2 == 1) {
			cout << "0";
		}
		if (i % 2 == 1 && hold % 2 == 1) {
			cout << "1";
		}
		cout << endl;
	}

}
