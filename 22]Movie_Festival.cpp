// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!

#include <bits/stdc++.h>
using namespace std;
#define fi              first
#define se              second
#define int long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
	fast_io
	int n, a, b;
	cin >> n;
	vector < pair < int, int > > v;
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back({b, a});
	}
	sort(v.begin(), v.end());
	int ans = 0;
	int time = 0;
	for(int i = 0; i < n; i++)
	{
		if(v[i].se >= time)
		{
			ans++;
			time = v[i].fi;
		}
	}
	cout << ans << '\n';
}