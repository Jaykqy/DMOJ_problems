#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman_map = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int decimal_num = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i > 0 && roman_map[s[i]] > roman_map[s[i-1]]) {
            decimal_num += roman_map[s[i]] - 2 * roman_map[s[i-1]];
        } else {
            decimal_num += roman_map[s[i]];
        }
    }
    return decimal_num;
}

int main() {
    // Sample input
    string roman_nums[5];
    for (int i = 0; i < 5; i++){
        getline(cin, roman_nums[i]);
    }

    // Conversion
    int decimal_nums[5];
    for (int i = 0; i < 5; i++) {
        decimal_nums[i] = romanToInt(roman_nums[i]);
    }

    // Output
    for (int i = 0; i < 5; i++) {
        cout << decimal_nums[i] << endl;
    }

    return 0;
}
