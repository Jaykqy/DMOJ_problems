#include <iostream>

using namespace std;


int main()
{
	int num, rounds, worst = 0, maxScore = 0;
	int winner = 0;
	cin >> num >> rounds;
	int** yodel;
	int* finalScore;
	int* winnerScore;
	winnerScore = new int[rounds];								//array to store scores of the winner
	finalScore = new int[num];									//array to store final scores of the contestants
	yodel = new int* [rounds];									//array to store everyone's scores

	for (int i = 0; i < rounds; i++) {							//creating dynamic 2d array
		yodel[i] = new int[num];
	}

	for (int i = 0; i < rounds; i++) {							//initializing the array
		for (int j = 0; j < num; j++) {
			cin >> yodel[i][j];
		}
	}

	for (int i = 0; i < num; i++) {								//adding up final scores of contestants
		finalScore[i] = 0;
		for (int j = 0; j < rounds; j++) {
			finalScore[i] += yodel[j][i];
		}
	}

	for (int i = 0; i < num; i++) {								//finding the winner and their score
		if (finalScore[i] > maxScore) {
			maxScore = finalScore[i];
			winner = i + 1;
		}
	}

	for (int i = 0; i < rounds; i++) {							//storing the winners scores
		winnerScore[i] = yodel[i][winner - 1];
	}

	for (int i = 0; i < rounds; i++) {							//sorting the scores lowest to highest to find contestant placement
		int holder;
		for (int pass = 1; pass < num; pass++) {
			for (int j = 0; j < num - 1; j++) {

				if (yodel[i][j] < yodel[i][j + 1]) {		
					holder = yodel[i][j + 1];
					yodel[i][j + 1] = yodel[i][j];
					yodel[i][j+1] = holder;
				}
			}
		}
	}

	for (int i = 0; i < rounds; i++) {							//finding the winners lowest placement
		for (int j = 0; j < num; j++) {
			if (winnerScore[i] == yodel[i][j] && worst > j + 1) {
				worst = j + 1;
			}
		}
	}

	cout << "Yodeller " << winner << " is the top yodeller: score " << maxScore << ", worst rank " << worst << endl;
}
