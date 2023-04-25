#include <iostream>
#include <string>

using namespace std;

bool isPal(string str) {
    string pal;
    string tmp;
    for (int i = str.length() - 1; i >=0 ; i--) {
        tmp = str[i];
        pal.append(tmp);
    }
    if (str == pal)
        return true;
    else
        return false;
}

void HiddenPalindrome() {
    int longest = 0; 
    string pal;
    getline(cin, pal);
    if (isPal(pal)) {
        cout << pal.length() << endl;
        return;
    }
    else {
        for (int i = 0; i < pal.length(); i++) {
            for (int j = i; j < pal.length(); j++) {
                if (isPal(pal.substr(i, j))) {
                    if (pal.substr(i, j).length() > longest) {
                        longest = pal.substr(i, j).length();
                    }
                }
            }
        }
    }
    cout << longest << endl;
}
