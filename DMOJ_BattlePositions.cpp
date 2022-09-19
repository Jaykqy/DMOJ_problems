#include <iostream>
using namespace std;

int main()
{

	int station, requiredTroops, waves, waveTroops, secure = 0;
	int receivers[2]{ 0 };
	cin >> station >> requiredTroops >> waves;
	int* stationTroops = new int[station];
	for (int y = 0; y < station; y++) {
		stationTroops[y] = 0;
	}
	for (int i = 0; i < waves; i++) {
		cin >> receivers[0] >> receivers[1] >> waveTroops;
		for (int j = receivers[0]; j <= receivers[1]; j++) {
				stationTroops[j-1] += waveTroops;
		}
	}
	for (int x = 0; x < station; x++) {
		if (stationTroops[x] < requiredTroops) secure++;
	}
	cout << secure << endl;
}
