#include <iostream>
#include <utility>

using namespace std;

int main()
{
	int city[5][5]{ 0 };
	int distance[5]{ 0 };
	for (int i = 1; i <= 4; i++) {
		cin >> distance[i];
		distance[i] += distance[i - 1];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i != j) {
				city[i][j] = abs(distance[j] - distance[i]);
			}
			cout << city[i][j] << " ";
		}
		cout << endl;
	}
}
