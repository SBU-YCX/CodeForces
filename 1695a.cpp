#include<iostream>
using namespace std;

int main()
{
	int t, n, m, v, mv, mi, mj;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		cin >> n >> m;
		mv = INT_MIN;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
			{
				cin >> v;
				if (v > mv)
				{
					mv = v;
					mi = i;
					mj = j;
				}
			}
		int ans = max(mi, n - mi + 1) * max(mj, m - mj + 1);
		cout << ans << endl;
	}
	return 0;
}