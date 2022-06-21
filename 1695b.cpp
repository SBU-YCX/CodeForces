#include<iostream>
using namespace std;

int main()
{
	int t, n, a, ma, mj;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		ma = INT_MAX;
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			if (a < ma)
			{
				ma = a;
				mj = j;
			}
		}
		if (n % 2 || mj % 2)
			cout << "Mike" << endl;
		else
			cout << "Joe" << endl;
	}
	return 0;
}