#include <iostream>
using namespace std;

int main()
{
	int t, a, b, c, d;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> d;
		int ans = (b > a) + (c > a) + (d > a);
		cout << ans << endl;
	}
	return 0;
}