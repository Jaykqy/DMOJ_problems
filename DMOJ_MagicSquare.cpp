#include <iostream>


void MagicSquares(){
    int arr[4][4];                                                          // array holds 4x4 grid
    int row[4];                                                             // sum of rows
    int col[4];                                                             // sum of columns
    int sum;                                                                // sum of one row
    for (int i = 0; i < 4; i++){                                            
        row[i] = 0;                                                         // initialize rows to 0
        col[i] = 0;                                                         // initialize columns to 0
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cin >> arr[i][j];                                          // input number into grid
            row[i] += arr[i][j];                                            // begin sum of row calculation
            col[j] += arr[i][j];                                            // begin sum of col calculation
        }
    }
    sum = row[0];
    for (int i = 0; i < 4; i++){
        if (sum != row[i]){
            std::cout << "not magic\n";
            return;
        }
        if (sum != col[i]){
            std::cout << "not magic\n";
            return;
        }
    }
    std::cout << "magic\n";
}

int main() {
    MagicSquares();
}
