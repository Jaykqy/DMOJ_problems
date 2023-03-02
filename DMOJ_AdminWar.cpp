#include <iostream>
#include <vector>

using namespace std;

void AdminWar() {
	int cards;																// number of cards dealt to each player
	int cValue;																// store card value temporarily
	int Xpoints = 0;														// stores Xyene's points 
	int Epoints = 0;														// stores Eagle's points
	vector <int>Xyene;														// stores values of Xyene's cards
	vector <int>Eagle;														// stores values of Eagle's cards	
	cin >> cards;															// input number of cards
	for (int i = 0; i < cards; i++) {										// input Xyene's card values
		cin >> cValue;														// use cValue to temporarily store card value
		Xyene.push_back(cValue);											// create new vector slot and enter cValue into vector
	}
	for (int i = 0; i < cards; i++) {										// input Eagle's card values	
		cin >> cValue;														// use cValue to temporarily store card value
		Eagle.push_back(cValue);											// create new vector slot and enter cValue into vector

		if (Xyene[i] > Eagle[i])											
			Xpoints++;														// if Xyene's card is bigger she gets a point

		if (Eagle[i] > Xyene[i])
			Epoints++;														// if Eagle's card is bigger he gets a point
	}
	if (Xpoints > Epoints) {												// if Xyene has more points, she wins
		cout << Xpoints << " " << Epoints << endl;							// output players points
		cout << "Xyene"					  << endl;							// output winner
	}

	if (Epoints > Xpoints) {												// if Eagle has more points he wins
		cout << Xpoints << " " << Epoints << endl;							// output players points
		cout << "FatalEagle"			  << endl;							// output winner
	}
	if (Xpoints == Epoints) {												// if points are equal its a tie
		cout << Xpoints << " " << Epoints << endl;							// output players points
		cout << "Tie"					  << endl;							// output winner
	}
}