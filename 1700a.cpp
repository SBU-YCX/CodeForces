#include <iostream>
using namespace std;

int main()
{
	long long t, n, m;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		cin >> n >> m;
		long long ans = (m - 1) * m / 2 + (n + 1) * n / 2 * m;
		cout << ans << endl;
	}
	return 0;
}