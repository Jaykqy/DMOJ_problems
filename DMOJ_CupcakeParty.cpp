#include <iostream>
using namespace std;

int main()
{
	int box, bigbox;
	cin >> bigbox >> box;
	bigbox *= 8;
	box *= 3;
	cout << (bigbox + box) - 28 << endl;
}
