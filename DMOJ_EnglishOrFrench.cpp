#include <iostream>
#include <string>
using namespace std;

int main()
{

	string sentence;
	int lines;
	int length;
	int Tcount = 0, Scount = 0;
	cin >> lines;
	cin.ignore();
	for (int i = 0; i < lines; i++) {
		getline(cin, sentence);
		length = sentence.length();
		for (int i = 0; i < length; i++) {
			if (sentence[i] == 't' || sentence[i] == 'T') {
				Tcount++;
			}
			if (sentence[i] == 's' || sentence[i] == 'S') {
				Scount++;
			}
		}

	}
	if (Tcount > Scount) {
		cout << "English" << endl;
	}
	if (Scount > Tcount) {
		cout << "French" << endl;
	}
	if (Scount == Tcount) {
		cout << "French" << endl;
	}

}
