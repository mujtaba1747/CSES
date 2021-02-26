// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
	fast_io
	int n;
	cin >> n;
	int p[n];
	for(int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	sort(p, p + n);
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
	 	ans += abs(p[i] - p[n/2]);
	}
	cout << ans << '\n';
}
