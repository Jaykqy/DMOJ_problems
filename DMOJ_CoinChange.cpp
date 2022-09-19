#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int minDenomination(int bubble[86], int length) {

    int tmp = bubble[0];
    for (int i = 1; i < length; i++) {
        if (bubble[i] < tmp) {
            tmp = bubble[i];
        }
    }
    return tmp;
}

int main()
{
    int numD = 0;
    int x = 0;
    cin >> x;
    cin >> numD;
    int* denomination = new int[numD];

    for (int i = 0; i < numD; i++) {
        cin >> denomination[i];
    }
    int minD = minDenomination(denomination, numD);                             // Find the minimum denomination as the starting point

    int* coins = new int[x + 1];

    for (int d = 0; d < x + 1; d++) {                                                   // initialze the coins array to 0
        coins[d] = 0;
    }

    for (int d = 0; d < numD; d++) {                                                  // set the indices of the coin array
        coins[denomination[d]] = 1;                                              // that match denominations to 1
    }                                                                          // since only that one coin is needed

    if (x < minD) {                                                              // If the amount for which change is
        cout << 0 << endl;                                                     // expected is less than the smallest
    }                                                                          // denomination no change is possible.
    else {
        for (int c = minD + 1; c <= x; c++) {                                           // Start making change from one more than the lowest denomination
            if (coins[c] != 1) {                                                 // If not a denomination
                for (int d = 0; d < numD; d++) {                                      // Search back through each denomination from the current sum
                    int index = c - denomination[d];                             // store that index
                    if ((index > 0) && (coins[index] > 0)) {                       // If the index is valid and a solution exists at that location
                        if (coins[c] == 0) {                                     // If this is the first solution
                            coins[c] = coins[index] + 1;                         // then store the result
                        }
                        else {                                                 // however if a previous solution exists
                            if ((coins[index] + 1) < coins[c]) {                 // then store this one if it consists of fewer coins
                                coins[c] = coins[index] + 1;
                            }
                        }
                    }
                }
            }
        }
        cout << coins[x] << endl;                                              // Print the result
    }
}