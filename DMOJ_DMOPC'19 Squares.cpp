#include <iostream>
#include <cmath>


void Squares(){
    int**arr;                                                               // 2D array to hold grid of numbers
    int**cost;                                                              // array to hold cost to get to each square
    int row;                                                                // number of rows in array
    int col;                                                                // number of columns in array
    std::cin >> row;
    std::cin >> col;
    arr  = new int*[row];                                                   // set array dimensions
    cost = new int*[row];                                                   // set cost array to same size
    for (int i = 0; i < row; i++){
        arr[i]  = new int[col];
        cost[i] = new int[col];
    }    

    for (int i = 0; i < row; i++){                                          // initialize 2D array
        for (int j = 0; j < col; j++){
            std::cin >> arr[i][j];
        }
    }
    cost[0][0] = arr[0][0];                                                 // manually set cost of first square

    for (int i = 0; i < row; i++){                                          // go through array and calculate costs 
        for (int j = 0; j < col; j++){
            if (i == 0){                                                    // case of the first row
                if (j!=0){
                    cost[i][j] = arr[i][j] + cost[i][j-1];                  // store cost to get to square
                }
            }
            else if (i!=0){                                                 // case of middle rows
                if (j==0){                                                  // first square of middle row
                    cost[i][j] = arr[i][j] + cost[i-1][j];                  // store cost to get to square
                }
                else                                                        // all other squares
                cost[i][j] = std::min(arr[i][j]+cost[i-1][j], arr[i][j]+cost[i][j-1]);
            }
            std::cout << cost[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << cost[row-1][col-1] << "\n";                                // output cost to get to bottom corner
}
