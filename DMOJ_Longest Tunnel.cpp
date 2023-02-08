#include <iostream>

using namespace std;

void LongestTunnel() {
	int tunnels;												// the number of tunnels
	int length;													// the length of a tunnel
	int start, end;												// start and end of a tunnel
	int longest;												// length of longest tunnel
	longest = 0;
	cin >> tunnels;
	for (int i = 0; i < tunnels; i++) {
		cin >> start >> end;
		length = end - start;									// calculate length of tunnel	
		if (length > longest) longest = length;
	}
	cout << longest << endl;
}