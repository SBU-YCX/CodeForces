#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int t, n;
	string a, s, b;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> a;
		if (a[0] == '9')
			s = string(n + 1, '1');
		else
			s = string(n, '9');
		b = "";
		int c = 0;
		reverse(a.begin(), a.end());
		for (int i = 0; i < n; i++)
		{
			int va = a[i] - '0' + c;
			int vs = s[i] - '0';
			if (vs < va)
			{
				vs += 10;
				c = 1;
			}
			else
				c = 0;
			b += (vs - va) + '0';
		}
		if (s.length() == n + 1 && s[n] - '0' != c)
			b += (s[n] - '0' - c) + '0';
		reverse(b.begin(), b.end());
		cout << b << endl;
	}
	return 0;
}