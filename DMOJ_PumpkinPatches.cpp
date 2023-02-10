#include <iostream>
#include <cmath>

using namespace std;

void Pumpkin() {
	int pumpkins;
	int lowX = INT_MAX;
	int lowY = INT_MAX;
	int highX = INT_MIN;
	int highY = INT_MIN;
	int l, w;
	cin >> pumpkins;
	int** coords = new int* [pumpkins];
	for (int i = 0; i < pumpkins; i++) {
		coords[i] = new int[2];
		cin >> coords[i][0];
		cin >> coords[i][1];
		if (coords[i][0] < lowX) lowX = coords[i][0];
		if (coords[i][1] < lowY) lowY = coords[i][1];
		if (coords[i][0] > highX) highX = coords[i][0];
		if (coords[i][1] > highY) highY = coords[i][1];
	}
	l = abs(highX - lowX);
	w = abs(highY - lowY);
	l = (l * 2) + (w * 2);
	cout << l << endl;
}