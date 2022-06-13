#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		bool flag = true;
		int d0 = -1, d = -1;
		cin >> n;
		vector<int> a(n), b(n);
		for (int j = 0; j < n; j++)
			cin >> a[j];
		for (int j = 0; j < n; j++)
		{
			cin >> b[j];
			if (flag)
			{
				if (a[j] < b[j])
					flag = false;
				if (b[j] == 0)
					d0 = max(d0, a[j] - b[j]);
				else
				{
					if (d == -1)
						d = a[j] - b[j];
					else if (d != a[j] - b[j])
						flag = false;
				}
			}
		}
		if (flag && d != -1 && d0 > d)
			flag = false;
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}