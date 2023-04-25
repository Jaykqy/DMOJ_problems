#include <iostream>
#include <array>
#include <string>

using namespace std;

int ChartoInt(char a) {
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    char caps[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    for (int i = 0; i < 26; i++) {
        if (a == alphabet[i]) {
            return i;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (a == caps[i]) {
            return i;
        }
    }
    return 0;
}

void Anagram() {
    array <int, 26>arr1;
    array <int, 26>arr2;
    for (int i = 0; i < 26; i++) {
        arr1[i] = 0;
        arr2[i] = 0;
    }
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != ' ') {
            arr1[ChartoInt(s1[i])]++;
        }
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] != ' ') {
            arr2[ChartoInt(s2[i])]++;
        }
    }
    if (arr1 == arr2) 
        cout << "Is an anagram.\n";
    else 
        cout << "Is not an anagram.\n";
}

int main(){
    Anagram();
}
