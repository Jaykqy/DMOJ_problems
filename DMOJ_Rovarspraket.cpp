#include <iostream>

using namespace std;

int ChartoInt(char a) {
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    for (int i = 0; i < 26; i++) {
        if (a == alphabet[i]) {
            return i;
        }
    }
    return 0;
}

void Rovar() {
    string str;
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u')
            cout << str[i];
        else if (str[i] == 'z') {
            cout << "zuz";
        }
        else {
            cout << str[i];
            if (ChartoInt(str[i]) < 3) {
                cout << alphabet[0];
                cout << alphabet[ChartoInt(str[i]+1)];
            }
            else if (ChartoInt(str[i]) > 2 && ChartoInt(str[i]) < 7) {
                cout << alphabet[4];
                if (str[i] == 'd') {
                    cout << 'f';
                }
                else
                cout << alphabet[ChartoInt(str[i]+1)];
            }
            else if (ChartoInt(str[i]) > 6 && ChartoInt(str[i]) < 12) {
                cout << alphabet[8];
                if (str[i] == 'h') {
                    cout << 'j';
                }
                else
                cout << alphabet[ChartoInt(str[i]+1)];
            }
            else if (ChartoInt(str[i]) > 11 && ChartoInt(str[i]) < 18) {
                cout << alphabet[14];
                if (str[i] == 'n') {
                    cout << 'p';
                }
                else
                cout << alphabet[ChartoInt(str[i]+1)];
            }
            else {
                cout << alphabet[20];
                if (str[i] == 't') {
                    cout << 'v';
                }
                else
                cout << alphabet[ChartoInt(str[i]+1)];
            }
        }

    }
    cout << endl;
}

int main(){
    Rovar();
}
