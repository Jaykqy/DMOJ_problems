#include <iostream>
#include <stdio.h>
#include <cstdio>

using namespace std;

void BubbleSort(short int bubble[], short int length) {                             // sort an array smallest to largest
	short int holder;
	for (short int pass = 1; pass < length; pass++) {
		for (short int i = 0; i < length - 1; i++) {
			if (bubble[i] > bubble[i + 1]) {                                        //swapping the values of two indexes if 1st > 2nd
				holder = bubble[i + 1];
				bubble[i + 1] = bubble[i];
				bubble[i] = holder;
			}
		}
	}
}

void InputArray(short int arr[], short int length) {                                // function does input for array
	short int min, sec;                                                             // length of song in min and sec
	for (short int i = 0; i < length; i++) {                                        // input lengths of songs in min and sec
		cin >> min;																	// input min of song
		cin >> sec;																	// input sec of song
		arr[i] = min * 60 + sec;                                                    // convert into seconds and store
	}
}

void Listen(short int arr[], short int total, short int length) {                   // function finds max number of songs that can be listened to
	int songs = 0;                                                                  // number of songs that can be played
	for (int i = 0; i < length; i++) {                                              // going through all songs
		if (total - arr[i] >= 0) {                                                  // checking if there is enough time to play the song
			songs++;                                                                // if there is enough time add one to the song counter
			total -= arr[i];                                                        // take away song length from available listening time
		}
	}
	cout << songs << endl;															// output number of songs that can be played
}

void Playlist() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	short int songs;                                                                // total number of songs
	short int min, sec;                                                             // time available to listen to music
	cin >> songs;
	short int* time = new short int(songs);                                         // creat array to hold lengths of all songs in seconds
	InputArray(time, songs);                                                        // input array
	BubbleSort(time, songs);                                                        // sort array
	cin >> min;																		// input total min available
	cin >> sec;																		// input total sec available
	sec = min * 60 + sec;                                                           // convert time into seconds
	Listen(time, sec, songs);														// compute number of songs that can be played
}