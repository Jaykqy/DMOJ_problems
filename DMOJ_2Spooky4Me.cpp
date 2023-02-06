#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void Spooky() {
	int lines;																		// variable to store number of lines of input
	int house;																		// variable to store number of houses
	int spook;																		// variable to store spookyness tolerance level
	int lowest;																		// variable to store lowest house with spook lvl	
	int highest;																	// variable to store highest house with spook lvl
	int currentSpook;																// variable to store current spook lvl of one house
	int tooSpook = 0;																// variable to store numeber of too spooky houses
	const int num = 3;
	cin >> lines >> house >> spook;													// input # of lines, # of houses, spook tolerance level
	int** spookLvl = new int*[lines];												// array to store numbers of houses affected by spookyness
	for		(int i = 0; i < num; i++)		{
		spookLvl[i] = new int[lines];												// making the array 2D to store every line
	}
	for		(int i = 0; i < lines; i++) {
		for (int l = 0; l < num;   l++)	{
			cin >> spookLvl[i][l];													// input houses affected by spooky decor
		}
		if (i == 0) lowest  = spookLvl[i][0];										// start with lowest house on the first line as lowest
		if (i == 0) highest = spookLvl[i][1];										// start with highest house on the first line as highest
		if (i > 0 && spookLvl[i][0] < lowest ) lowest  = spookLvl[i][0];			// finding the lowest house with spookyness
		if (i > 0 && spookLvl[i][1] > highest) highest = spookLvl[i][1];			// finding the highest  house with spookyness
	}
	for		(int i = lowest; i <= highest; i++) {									// checking houses from lowest highest with spook lvls
		currentSpook = 0;
		for (int l = 0;	l < lines; l++)			{									// calculate spook lvl of a house
			if (spookLvl[l][0] <= i && spookLvl[l][1] >= i) currentSpook += spookLvl[l][2];
		}
		if (currentSpook >= spook) tooSpook++;										// if the spook lvl is greater or equal to tolerance it is too spooky
	}
	cout << house - tooSpook << endl;

}