#include<iostream>
using namespace std;

int main()
{
	int t, l1, r1, l2, r2;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> l1 >> r1 >> l2 >> r2;
		if (min(r1, r2) >= max(l1, l2))
			cout << max(l1, l2) << endl;
		else
			cout << l1 + l2 << endl;
	}
	return 0;
}