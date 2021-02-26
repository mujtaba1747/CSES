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
	int n, m;
	cin >> n >> m;
	map < int, int > mp;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	while(m--)
	{
		int pr;
		cin >> pr;
		if(mp.size() == 0)
		{
			cout << -1 << '\n';
			continue;
		}
		auto z = mp.lower_bound(pr);
		if(z == mp.begin() && z -> fi > pr)
		{
			cout << -1 << '\n';
		}
		else if(z != mp.end() && z -> fi == pr)
		{
			mp[z->fi]--;
			cout << z -> fi << '\n';
			if(mp[z->fi] == 0)
			{
				mp.erase(z -> fi);
			}
		}
		else
		{
			z--;
			mp[z -> fi]--;
			cout << z -> fi << '\n';
			if(mp[z -> fi] == 0)
			{
				mp.erase(z -> fi);
			}
		}



	}
	
}