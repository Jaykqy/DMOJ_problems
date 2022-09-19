#include <iostream>
#include <string>
using namespace std;

int main()
{

	string sentence;
	int lines   = 0;
	int length  = 0;
	int letters = 0;
	cin >> lines;
	cin.ignore();
	
	for (int i = 0; i < lines;  i++) {
		getline(cin, sentence);
		length = sentence.length();
		letters = 0;
		for (int j = 0; j < length; j++) {
			if (sentence[j] != ' ' ) {
				letters++;
				if (letters == 4) {
					if (sentence[j + 1] == ' ') {
						sentence[j - 3] = '*';
						sentence[j - 2] = '*';
						sentence[j - 1] = '*';
						sentence[j    ] = '*';
					}
					if (j == length - 1) {
						sentence[j - 3] = '*';
						sentence[j - 2] = '*';
						sentence[j - 1] = '*';
						sentence[j    ] = '*';
					}
				}
			}
			if (sentence[j] == ' ') letters = 0;
		}
		cout << sentence << endl;
	}

}
