// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
	fast_io
	int n, x;
	cin >> n >> x;
	int a[n];
	map < int, set < int > > mp;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]].insert(i);
	}
	int i1 = -1, i2 = -1;
	for(int i = 0; i < n; i++)
	{
		int e = x - a[i];
		if(mp.count(e))
		{
			if(e == a[i])
			{
				if(mp[e].size() > 1)
				{
					set < int > :: iterator it = mp[e].begin();
					i1 = *it;
					i2 = *(++it);
					break;					
				}
			}
			else
			{
				i1 = i;
				i2 = *mp[e].begin();
				break;
			}
		}
	}
	if(i1 == -1)
	{
		cout << "IMPOSSIBLE\n";
	}
	else
	{
		cout << ++i1 << ' ' << ++i2 << endl;
	}

}
