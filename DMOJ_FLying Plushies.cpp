#include <iostream>

using namespace std;

void FlyingPlushies() {
	int alt;															// variable for altitude of flight
	int plush;															// variable for number of plushies
	int collision = 0;													// variable for number of plushies hit
	cin >> alt;															// input flight altitude
	cin >> plush;														// input num of plushies
	int *height = new int[plush];										// array for heights of plushies
	for (int i = 0; i < plush; i++) {									
		cin >> height[i];												// input heights of plushies
		if (height[i] >= alt) collision++;								// if plushies are higher than altitude there is collision
	}
	cout << collision << endl;
}
