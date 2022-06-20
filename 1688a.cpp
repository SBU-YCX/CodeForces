#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t, x, y;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> x;
		y = 0;
		y ^= (x ^ (x & (x - 1)));
		if (__builtin_popcount(x) > 1)
			cout << y << endl;
		else
		{
			int xinv = ~x;
			y ^= (xinv ^ (xinv & (xinv - 1)));
			cout << y << endl;
		}
	}
	return 0;
}