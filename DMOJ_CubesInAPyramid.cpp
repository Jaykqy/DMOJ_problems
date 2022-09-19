#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	float length, height, volume;
	cin >> length >> height;
	volume = (length * length) * (height / 3);
	cout << ceil(volume) << endl;
}
