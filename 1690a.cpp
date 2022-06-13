#include <iostream>
using namespace std;

int main()
{
	int t, n, h1, h2, h3;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int h2 = n / 3;
		if (n % 3 == 0)
		{
			h1 = h2 + 1;
			h3 = h2 - 1;
		}
		else if (n % 3 == 1)
		{
			h1 = h2 + 2;
			h3 = h2 - 1;
		}
		else
		{
			h1 = h2 + 2;
			h3 = h2 - 1;
			h2 = h2 + 1;
		}
		cout << h2 << ' ' << h1 << ' ' << h3 << endl;
	}
	return 0;
}