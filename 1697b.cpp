#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, q, x, y;
	cin >> n >> q;
	vector<unsigned long long> p(n), s(n + 1, 0);
	for (int i = 0; i < n; i++)
		cin >> p[i];
	sort(p.rbegin(), p.rend());
	for (int i = 0; i < n; i++)
		s[i + 1] = s[i] + p[i];
	for (int j = 0; j < q; j++)
	{
		cin >> x >> y;
		cout << s[x] - s[x - y] << endl;
	}
	return 0;
}