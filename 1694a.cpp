#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		string s = "";
		if (a > b)
		{
			for (int j = 0; j < b; j++)
				s += "01";
			s += string(a - b, '0');
		}
		else
		{
			for (int j = 0; j < a; j++)
				s += "10";
			s += string(b - a, '1');
		}
		cout << s << endl;
	}
	return 0;
}