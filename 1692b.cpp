#include<iostream>
#include<set>
using namespace std;

int main()
{
	int t, n, a;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		set<int> s;
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			s.insert(a);
		}
		if ((n - s.size()) % 2)
			cout << s.size() - 1 << endl;
		else
			cout << s.size() << endl;
	}
	return 0;
}