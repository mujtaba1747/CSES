// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
	fast_io
	int t;
	cin >> t;
	while(t--)
	{
		int x, y;
		cin >> x >> y;
		int a = (2*y - x)/3;
		int b = y - 2*a;
		if((2*y-x)%3 == 0 && b >= 0 && a >= 0)
		{
			cout << "YES\n";
		}
		else cout << "NO\n";

	}
}