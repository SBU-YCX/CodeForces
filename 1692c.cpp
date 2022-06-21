#include<iostream>
using namespace std;

int main()
{
	int t, r, c;
	char b;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int pr[8] = {};
		r = -1, c = -1;
		for (int i = 0; i < 8; i++)
		{
			int m = 0, pc = -1;
			for (int j = 0; j < 8; j++)
			{
				cin >> b;
				if (b == '#')
				{
					if (c == -1)
					{
						m++;
						if (m == 1)
							pc = j;
						else if (m == 2)
							c = (pc + j) / 2 + 1;
					}
					if (pr[j] != 0)
						r = (pr[j] + i + 1) / 2;
					else
						pr[j] = i + 1;
				}
			}
		}
		cout << r << ' ' << c << endl;
	}
	return 0;
}