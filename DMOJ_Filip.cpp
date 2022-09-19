#include <iostream>
using namespace std;

int main()
{
	int num1, num2, flipvar1,flipvar2, reverse2 = 0, reverse = 0;
	cin >> num1 >> num2;
	for (int i = 0; i < 3; i++) {
		flipvar1 = num1 % 10;
		reverse = reverse * 10 + flipvar1;			//flipping first number
		num1 /= 10;

		flipvar2 = num2 % 10;
		reverse2 = reverse2 * 10 + flipvar2;		//flipping second number
		num2 /= 10;
	}
	if (reverse > reverse2) {
		cout << reverse << endl;
	}
	if (reverse2 > reverse) {
		cout << reverse2 << endl;
	}
}
