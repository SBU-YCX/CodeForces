#include <iostream>
using namespace std;

int main()
{
	long long n, m, a;
	cin >> n >> m >> a;
	long long ans = (n / a + ((n % a) ? 1 : 0)) * (m / a + ((m % a) ? 1 : 0));
	cout << ans << endl;
	return 0;
}