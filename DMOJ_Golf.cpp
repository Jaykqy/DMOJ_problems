 int minDenomination(int bubble[], int length) {

        int tmp = bubble[0];
        for (int i = 1; i < length; i++) {
            if (bubble[i] < tmp) {
                tmp = bubble[i];
            }
        }
        return tmp;
    }

void Golf() {
        int dist;                                                           // distance from golf tee to hole
        int numOfClubs;                                                     // number of types of clubs
        std::cin >> dist;
        std::cin >> numOfClubs;
        int* clubs = new int[numOfClubs];                                   // the distance each golf club hits
        for (int i = 0; i < numOfClubs; i++) {
            std::cin >> clubs[i];
        }
        int* shots = new int[dist + 1];                                     // minimum number of shots for a given distance
        for (int i = 0; i < dist; i++) {
            shots[i] = NULL;                                                // make all shots 0 
        }
        for (int i = 0; i < numOfClubs; i++) {
            shots[clubs[i]] = 1;                                            // set default distances of clubs to one
        }
        int smallest = minDenomination(clubs, numOfClubs);                  // find distance for the smallest club
        if (dist < smallest) {                                              // if the target distance is smaller than smallest club
            std::cout << "Roberta acknowledges defeat.\n";                  // it is not possible to get to the hole
            return;                                                         // hence end the program early
        }
        int minShot;                                                        // minimum num of shots to get a given distance
        for (int i = smallest; i <= dist; i++) {                            // start calculating distances from 1 above the smallest
            minShot = INT_MAX;                                              // reset lowest shots variable
            if (shots[i] != 1) {                                            // proceed if distance is not a one shot
                for (int j = 0; j < numOfClubs; j++) {                      // check all club distances 
                    if (i - clubs[j] > 0) {                                 // make sure distance of club is in range
                        if (shots[i - clubs[j]] != 0) {                     // make sure past distance was possible to achieve
                            if (shots[i - clubs[j]] < minShot) {            // check if there is a new lowest num of shots
                                minShot = shots[i - clubs[j]];              // update lowest number of shots variable
                            }
                        }
                    }
                }
                if (minShot != INT_MAX)                                     // if lowest num of shots variable has been changed
                    shots[i] = minShot + 1;                                 // store num of shots for given distance in array
            }
        }
        if (shots[dist] != 0)
            std::cout << "Roberta wins in " << shots[dist] << " strokes.\n";// output lowest num of shots for target distance
        else
            std::cout << "Roberta acknowledges defeat.\n";
    }
