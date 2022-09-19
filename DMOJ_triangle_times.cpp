#include <iostream>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == 60 && b == 60 && c == 60) {
		cout << "Equilateral" << endl;
		return 0;
	}
	if ((a == b || a == c || c == b) && (a + b + c == 180)) {
		cout << "Isosceles" << endl;
		
	}
	if ((a != b && a != c && c != b) && (a + b + c == 180)) {
		cout << "Scalene" << endl;

	}
	if (a + b + c != 180) {
		cout << "Error" << endl;
	}
	


}
