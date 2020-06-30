// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!
 
#include <bits/stdc++.h>
using namespace std;
#define fi  first
#define se  second
#define int long long
#define pb push_back
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
signed main()
{
	int n;
	int cu = 0;
	vector < pair < int, int > > v;
	vector < pair < int, int > > vv;
	vector < pair <int, int > > intervals;
	int a, b;
	cin >> n;
	int mx = -1;
	for(int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		v.pb({a, 0});
		v.pb({b, 1});
		intervals.pb({a, b});
		vv.pb({a, -i});
		vv.pb({b, i});
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
	{
		if(!v[i].se)
		{
			cu++;
			mx = max(cu, mx);
		}
		else
		{
			cu--;
		}
	}
	cout << mx << '\n';
	sort(vv.begin(), vv.end());
	set < int > pres;
	int co = 0;
	int ans[n];
	set < int > colors;
	map < int, int > mp;
	for(int i = 1; i <= mx; i++)
	{
		colors.insert(i);
	}
	for(int i = 0; i < vv.size(); i++)
	{
		if(vv[i].se < 0)
		{
			ans[-vv[i].se - 1] = *colors.begin();
			mp[-vv[i].se - 1] = *colors.begin();
			colors.erase(colors.begin());	
		}
		else
		{
			colors.insert(mp[vv[i].se - 1]);
		}

	}
	for(int i = 0; i < n; i++)cout << ans[i] << ' ';
}