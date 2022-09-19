#include <iostream>
using namespace std;

int main()
{
	for (int j = 0; j < 10; j++) {
		int shirts = 0, laundry = 0, event = 0, totaldays = 0, holder = 0;
		int eventdays[100]{ 0 };
		cin >> shirts >> event >> totaldays;
		holder = shirts;
		for (int x = 0; x < event; x++) {				//taking the days on which there are events
			cin >> eventdays[x];
		}
		for (int day = 1; day <= totaldays; day++) {	//checking if we have to do laundry
			if (shirts == 0) {
				laundry++;
				shirts = holder;
			}
			for (int i = 0; i < event; i++) {			//checking if today is an event day
				if (day == eventdays[i]) {
					holder++;
					shirts = holder;
				}
			}
			shirts--;
		}
		cout << laundry << endl;
	}
}
