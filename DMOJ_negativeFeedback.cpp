#include <iostream>
using namespace std;

int main()
{
	float vOut, vIn, rf, rg;
	cin >> vIn >> rf >> rg;
	vOut = vIn * (1 + rf / rg);
	cout << vOut;
}
