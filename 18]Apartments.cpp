// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
	fast_io
	int n, m, k, ans = 0;
	cin >> n >> m >> k;
	vector < pair < int, int > > v;
	int x;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back({x - k, x + k});
	}
	int b[m];
	for(int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(b, b + m);
	sort(v.begin(), v.end());
	int l = 0;
	for(int i = 0; i < v.size(); i++)
	{
		if(l == m)
		{
			break;
		}
		while(b[l] < v[i].first)
		{
			l++;
			if(l == m)
			{
				break;
			}
		}
		if(l == m)
		{
			break;
		}
		if(b[l] > v[i].second)
		{
			continue;
		}
		else
		{
			l++;
		}
		ans++;
	}
	cout << ans << '\n';
}