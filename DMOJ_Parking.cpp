#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int counter = 0, counter2 = 0, counter3 = 0;
	cin >> a >> b >> c;
	b = b * 2;
	c = c * 3;
	int park[3][2] = {
		{0},
		{0},
		{0}
	};
	for (int x = 0; x < 3; x++) {			//initializing array / taking truck entry and exit times
		for (int y = 0; y < 2; y++) {
			cin >> park[x][y];
		}
	}
	for (int check = 0; check < 100; check++) {
		if ((check >= park[0][0] && check < park[0][1]) && (check >= park[1][0] && check < park[1][1]) && (check >= park[2][0] && check < park[2][1]) ) {
			counter++;
		}
		if ((check < park[0][0] || check > park[0][1]) && (check >= park[1][0] && check < park[1][1]) && (check >= park[2][0] && check < park[2][1])) {
			counter2++;
		}
		if ((check >= park[0][0] && check < park[0][1]) && (check < park[1][0] || check > park[1][1]) && (check >= park[2][0] && check < park[2][1])) {
			counter2++;
		}
		if ((check >= park[0][0] && check < park[0][1]) && (check >= park[1][0] && check < park[1][1]) && (check < park[2][0] || check > park[2][1])) {
			counter2++;
		}
		if ((check >= park[0][0] && check < park[0][1]) && (check < park[1][0] || check > park[1][1]) && (check < park[2][0] || check > park[2][1])) {
			counter3++;
		}
		if ((check < park[0][0] || check > park[0][1]) && (check >= park[1][0] && check < park[1][1]) && (check < park[2][0] || check > park[2][1])) {
			counter3++;
		}
		if ((check < park[0][0] || check > park[0][1]) && (check < park[1][0] || check > park[1][1]) && (check >= park[2][0] && check < park[2][1])) {
			counter3++;
		}
	}
	counter = counter * c;
	counter2 = counter2 * b;
	counter3 = counter3 * a;
	counter = counter + counter2 + counter3;
	cout << counter << endl;
}
