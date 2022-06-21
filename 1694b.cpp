#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t, n;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> s;
		long long ans = 0;
		for (int j = 0; j < n; j++)
		{
			if (j == 0 || s[j] != s[j - 1])
				ans += j;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}