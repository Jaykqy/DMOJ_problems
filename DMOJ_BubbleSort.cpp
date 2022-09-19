#include <iostream>
using namespace std;

int main()
{
	int bubble[20]{ 0 };
	int length;
	int holder;
	for (int pass = 1; pass < length; pass++) {
		for (int i = 0; i < length - 1; i++) {

			if (bubble[i] > bubble[i + 1]) {			//swapping the values of two indexes if 1st > 2nd
				holder = bubble[i + 1];
				bubble[i + 1] = bubble[i];
				bubble[i] = holder;
			}
		}
	}
}
