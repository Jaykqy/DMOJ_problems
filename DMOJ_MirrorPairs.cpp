#include <iostream>
#include <string>
using namespace std;

int main()
{

	string pair;
	cout << "Ready" << endl;
	while (pair != "  ") {
		getline(cin, pair);
		if (pair == "  ") break;
		if (pair == "db" || pair == "bd" || pair == "pq" || pair == "qp") {
			cout << "Mirrored pair" << endl;
		}
		else {
			cout << "Ordinary pair" << endl;
		}
	}

}
