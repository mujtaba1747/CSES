// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
	fast_io
	set < pair < int, int > > s;
	int x = 0, y = 0, n;
	cin >> n;
	vector < int > a, b;
	for(int i = 0; i < n; i++)
	{
		cin >> x >> y;
		a.push_back(x);
		b.push_back(y);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int l = 0, r = 0;
	int ans = 1;
	x = 0;
	while(r < b.size())
	{
		ans = max(ans, x);
		if(l == a.size())
		{
			break;
		}
		if(a[l] < b[r])
		{
			l++;
			x++;
		}
		else
		{
			x--;
			r++;
		}
		ans = max(ans, x);
	}
	cout << ans << endl;
}