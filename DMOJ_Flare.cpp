#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float v = 0;
	double t = 0;
	cin >> v;
	if (v <= 1 || v >= 1000000000) {
		return 0;
	}
	t = v / 4.9;
	cout << setprecision(7) << t << endl;


}

