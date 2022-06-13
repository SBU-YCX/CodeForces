#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		vector<int> ori(n), now(n, -1);
		map<int, vector<int>> mp;
		for (int j = 0; j < n; j++)
		{
			cin >> ori[j];
			mp[ori[j]].emplace_back(j);
		}
		bool possible = true;
		for (auto& p : mp)
		{
			if (p.second.size() == 1)
			{
				cout << -1 << endl;
				possible = false;
			}
			if (!possible)
				break;
			auto& v = p.second;
			int s = v.size();
			for (int k = 0; k < s - 1; k++)
				now[v[k]] = v[k + 1] + 1;
			now[v[s - 1]] = v[0] + 1;
		}
		if (!possible)
			continue;
		for (int j = 0; j < n; j++)
			cout << now[j] << ' ';
		cout << endl;
	}
	return 0;
}