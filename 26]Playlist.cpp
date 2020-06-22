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
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ans = 1;
	int l = 0, r = 0;
	map < int, int > mp;
	mp[a[0]] = 0;
	for(int i = 1; i < n; i++)
	{
		if(mp.count(a[i]))
		{
			ans = max(ans, r - l + 1);
			int pos = mp[a[i]];
			int q = l, w = r;
			for(int j = l; j <= pos; j++)
			{
				mp.erase(a[j]);
			}
			l = pos + 1;
			r = i;
			mp[a[i]] = i;
			ans = max(ans, r - l + 1);
		}
		else
		{	
			r++;
			mp[a[i]] = i;
			ans = max(ans, r - l + 1);
		}
	}
	cout << ans << '\n';
	
}
