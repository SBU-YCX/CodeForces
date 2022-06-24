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
		int j = (n + 1) / 2, ans = 0;
		while (j < n && s[j] == s[j - 1])
		{
			ans += 2;
			j++;
		}
		if (n % 2)
			ans += 1;
		cout << ans << endl;
	}
	return 0;
}