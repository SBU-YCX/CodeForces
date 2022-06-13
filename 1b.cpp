#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string s, ans;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		ans = "";
		int j = 0, m = s.length();
		while (j < m && !isdigit(s[j]))
			j++;
		int k = s.find('C', j);
		if (k != -1)
		{
			int c = stoi(s.substr(k + 1));
			string rs = s.substr(1, k - 1), cs = "";
			while (c > 0)
			{
				cs += ((c % 26 + 25) % 26 + 'A');
				c = (c - 1) / 26;
			}
			reverse(cs.begin(), cs.end());
			ans = cs + rs;
		}
		else
		{
			int c = 0;
			string cs = s.substr(0, j), rs = s.substr(j);
			for (auto& cc : cs)
				c = c * 26 + (cc - 'A' + 1);
			cs = to_string(c);
			ans = "R" + rs + "C" + cs;
		}
		cout << ans << endl;
	}
	return 0;
}