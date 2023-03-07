#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>

#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

using namespace std;

void PrefixedSumVec(vector <int>& arr, int length) {							// function finds prefixed sum of a vector
	int tmp;																	// temporary variable used for input
	for (int i = 1; i <= length; i++) {											// go through indexes 1 to the end
		scan(tmp);																// input rating for an episode
		arr.push_back(tmp);														// insert value into new slot in vector
		if (i > 0)																// start prefixed sum after one input
		arr[i] = arr[i] + arr[i - 1];											// new index is the sum off all previous indexes and itself
	}
}

void Query(vector <int> rating, int length) {									// function to solve a query
	int start, end;																// start and end of a query
	scan(start);																// input starting point of the case
	scan(end);																	// input ending point of the case
	start--;																	// subtract one from starting point for inclusive calculation
	printf("%d\n",rating[length] - rating[end] + rating[start]);				// calculate ratings of non missed episodes
}

void Marathon() {																// function to solve problem
	int episodes;																// total number of episodes
	int queries;																// total number of queries
	vector <int>rating;															// rating of each individual episode
	rating.push_back(0);														// make first index of ratings vector 0 
	scan(episodes);																// using macro for performance reasons
	scan(queries);
	PrefixedSumVec(rating, episodes);											// turn vector into prefixed sum vector
	for (int i = 0; i < queries; i++) {											// loop to solve 'queries' number of cases
		Query(rating, episodes);												// calculate non missed episodes using function
	}
}

/*********************************************************************************************************************

			MARATHON PROBLEM BUT ALL IN ONE FUNCTION 

**********************************************************************************************************************/

void MarathonFast() {
	int rating[500001];
	int total;
	rating[0] = 0;
	int episodes, queries, start, end;
	scan(episodes);
	scan(queries);
	for (int i = 1; i <= episodes; i++) {
		scan(rating[i]);
		if (i > 0)
			rating[i] = rating[i] + rating[i - 1];
	}
	total = rating[episodes];
	for (int i = 0; i < queries; i++) {
		scan(start);																// input starting point of the case
		scan(end);																	// input ending point of the case
		start--;																	// subtract one from starting point for inclusive calculation
		printf("%d\n", total - rating[end] + rating[start]);							// calculate ratings of non missed episodes
	}
}