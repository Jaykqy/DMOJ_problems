#include <iostream>
#include <string>
using namespace std;

int main()
{

	int set = 0;
	int subject, verb, object;
	cin >> set;
	for (int i = 0; i < set; i++) {

		cin >> subject >> verb >> object;
		cin.ignore();
		string* subjects;
		string* verbs   ;
		string* objects ;

		subjects = new string[subject];
		verbs    = new string[verb]   ;
		objects  = new string[verb]   ;

		for (int i = 0; i < subject; i++) getline(cin, subjects[i]);
		for (int i = 0; i < verb;    i++) getline(cin, verbs   [i]);
		for (int i = 0; i < object;  i++) getline(cin, objects [i]);

		for         (int i = 0; i < subject; i++) {
			for     (int j = 0; j < verb;    j++) {
				for (int k = 0; k < object;  k++) {
					cout << subjects[i] << " " << verbs[j] << " " << objects[k] << "." << endl;
				}
			}
		}
	}

}
