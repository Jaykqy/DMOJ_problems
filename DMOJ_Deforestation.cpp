#include <iostream>
using namespace std;

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int total_trees, startcut, endcut, queries, mass = 0;
	cin >> total_trees;
	int* trees = new int[total_trees];
	for (int x = 0; x < total_trees; x++) {
		cin >> trees[x];
	}
	cin >> queries;
	for (int i = 0; i < queries; i++) {
		cin >> startcut >> endcut;
		for (int y = startcut; y <= endcut; y++) {
			mass += trees[y];
		}
		cout << mass << endl;
		mass = 0;
	}
}