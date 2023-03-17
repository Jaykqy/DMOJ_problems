 void frog2() {
        int stones;                                                     // the number of stones
        int dist;                                                       // the distance that can be jumped
        int minCost;                                                    // temp variable to help find smallest cost
        std::cin >> stones;                                             // input number of stones
        std::cin >> dist;                                               // input distance that can be jumped
        int* jump = new int[stones + 1];                                // the height of each stone
        int* cost = new int[stones + 1];                                // the lowest cost to get to each stone 
        for (int i = 1; i <= stones; i++) {                             // initialize height of each stone
            std::cin >> jump[i];
        }
        cost[1] = 0;                                                    // frog is already on stone 1 so cost = 0
        cost[2] = abs(jump[2] - jump[1]);                               // cost for stone 2 = height of 2nd - height of 1st stone
        if (stones == 2) {                                              // if there are only two stones
            std::cout << cost[2] << "\n";                               // output the cost to get to stone 2
            return;                                                     // end the program early
        }
        for (int i = 3; i <= stones; i++) {                             // calculate lowest cost starting from stone 3
            minCost = INT_MAX;                                          // reset minCost variable
            for (int j = 1; j <= dist; j++) {                           // compare all distances of jumps
                if (j < i) {                                            // ensuring array stays in bounds
                    if (abs(jump[i] - jump[i - j]) + cost[i - j] < minCost)
                        minCost = abs(jump[i] - jump[i - j]) + cost[i - j];
                }
            }
            cost[i] = minCost;                                          // store minimum cost of the i'th stone
        }
        std::cout << cost[stones] << "\n";                              // output lowest possible cost to get to last stone
    }
