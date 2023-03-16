void frog1() {
        int stones;                                                     // the number of stones
        std::cin >> stones;                                             // input number of stones
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
        for (int i = 3; i <= stones; i++) {                             // calculte lowest cost starting from stone 3
            if (abs(jump[i] - jump[i - 2]) + cost[i - 2] <              // if jumping from two stones back      
                abs(jump[i] - jump[i - 1]) + cost[i - 1])               // is less than jumping one from one stone back
                cost[i] = abs(jump[i] - jump[i - 2]) + cost[i - 2];     // store lowest cost for the i'th stone
            else
                cost[i] = abs(jump[i] - jump[i - 1]) + cost[i - 1];     // store lowest cost for the i'th stone
        }
        std::cout << cost[stones] << "\n";                              // output lowest possible cost to get to last stone
    }
