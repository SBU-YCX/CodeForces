#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int a, nodd = 0, neven = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			if (a % 2)
				nodd++;
			else
				neven++;
		}
		cout << min(nodd, neven) << endl;
	}
	return 0;
}