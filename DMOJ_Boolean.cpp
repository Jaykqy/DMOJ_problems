#include <iostream>
#include <string>
using namespace std;

int main()
{

	string sentence;
	int notcount;
	getline(cin, sentence);
	notcount = sentence.find("not");
	cout << notcount;

}
