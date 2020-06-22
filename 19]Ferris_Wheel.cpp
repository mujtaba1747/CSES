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
	int p[n];
	for(int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	sort(p, p + n);
	int l = 0, r = n - 1;
	int z[n] = {'\0'};
	int ans = 0;
	while(l < r)
	{
		if(p[l] >= x)break;

		while(x - p[l] < p[r])
		{
			r--;
		}
		if(l >= r)break;
		z[l] = 1;
		z[r] = 1;
		l++;
		r--;
		ans++;
	}
	for(int i = 0; i < n; i++)
	{
		if(z[i] == 0)
			ans++;
	}
	cout << ans << '\n';
}