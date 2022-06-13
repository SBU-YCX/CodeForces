#include <iostream>
using namespace std;

int main()
{
	int t, n, m;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		int a, s = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			s += a;
		}
		cout << max(0, s - m) << endl;
	}
	return 0;
}