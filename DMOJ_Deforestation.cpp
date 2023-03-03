#include <iostream>
#include <vector>
using namespace std;

void PrefixedSum(vector <int>&arr) {										// function finds prefixed sum of a vector
	if (arr.size() == 1) return;										// if the array is legnth 1 there is nothing to do 
	for (unsigned int i = 1; i < arr.size(); i++) {								// go through indexes 1 to the end
		arr[i] = arr[i] + arr[i-1];									// new index is the sum off all previous indexes and itself
	}
}

void Deforestation() {												// main funtion to solve the problem
	int trees;												// stores number of trees
	int temp;												// variable to temporarily store amount of wood for one tree
	int start, end;												// variables for start and ending point of a query
	vector <int>wood;											// stores amount of wood for each tree 
	wood.push_back(0);											// set first index of vector to 0
	int queries;												// stores number of queries for amount of wood
	cin >> trees;												// input number of trees
	for (int i = 0; i < trees; i++) {											
		cin >> temp;											// temporarily store amount of wood in one tree
		wood.push_back(temp);										// store amount of wood in new vector slot
	}
	PrefixedSum(wood);											// calculate prefixed sum of vector
	cin >> queries;												// input number of queries
	for (int i = 0; i < queries; i++) {									// run loop 'query' amount of times
		cin >> start >> end;										// input start and end points of one query
		end++;												// add one to end point to find inclusive sum
		cout << wood[end] - wood[start] << endl;							// output amount of wood in query
	}
}
