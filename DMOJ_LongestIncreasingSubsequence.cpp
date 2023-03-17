void LIS7p() {                                                          // find longest increase subsequence in an array
        int length;                                                     // length of the sequence
        int maxLis;                                                     // store the length of longest increasing subsequence
        int curLis;                                                     // store current longest increasing subsequence
        maxLis = 0;
        std::cin >> length;                                             // input length of sequence
        int* sequence = new int[length];                                // create array to store sequence
        int* lis = new int[length];                                     // store longest increasing subsequence for each index
        lis[0] = 1;                                                     // longest subsequence at first index is 1
            std::cin >> sequence[0];                                    // input numbers of the sequence
        for (int i = 1; i < length; i++) {                              // loop runs length number of times
            std::cin >> sequence[i];                                    // input numbers of the sequence
            curLis = 0;                                                 // reset curLis variable for next index
            for (int j = 0; j < i; j++) {                               // go through all previous indexes
                if (sequence[j] < sequence[i]) {                        // check if earlier index is less than current 
                    if (lis[j] > curLis)                                // the lis of an index is greater than the max
                        curLis = lis[j];                                // update the max lis
                        
                    if (curLis > maxLis)                                // if the current lis is greater than the overall longest 
                        maxLis = curLis;                                // update  the overall longest subsequence
                }
            }
                lis[i] = curLis + 1;                                    // enter the lis for the current index
        }
        std::cout << maxLis + 1 << "\n";                                // output longest increasing subsequence
        
    }
