#include <iostream>

using namespace std;

void SelectionSort(int arr[], int passes, int arrlength) {          // funtion that sorts array to a certain point
    int tmp;                                                        // temp variable to store number for a swap
    int loc;                                                        // store location of an index in array
    for (int i = 0; i < passes; i++) {                              // run loop number of swaps allowed
        for (int j = 0; j < arrlength; j++) {                       // check array length for desired value
            if (arr[j] == arrlength-i) {                            // check if an index has desired value
                loc = j;                                            // store location of desired value
                tmp = arr[i];                                       // store num in index that will be overwritten
                arr[i] = arr[loc];                                  // replace num with desired value 
                arr[j] = tmp;                                       // replace desired numbers old spot with overwritten number
            }
        }
    } 
}

void LargestPermutation() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int nums;                                                       // number of numbers                                                                   
    int swaps;                                                      // number of swaps allowed
    cin >> nums;                                                    // input number of numbers
    cin >> swaps;                                                   // input number of swaps allowed
    int* arr = new int(nums);                                       // array to store numbers
    for (int i = 0; i < nums; i++) {
        cin >> arr[i];                                              // input array
    }
    SelectionSort(arr, swaps, nums);                                // perform number of swaps allowed
    for (int i = 0; i < nums; i++) {
        if (i < nums - 1)
            cout << arr[i] << " ";                                  // ouput after swaps array
        else
            cout << arr[i] << "\n";
    }
    return;
}