// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!
 
#include <bits/stdc++.h>
using namespace std;
#define fi  first
#define se  second
#define int long long
#define pb push_back
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int k[200064];
int n, t;
int check(int time)
{
	int su = 0;
	for(int i = 0; i < n; i++)
	{
		su += time / k[i];
		if(su >= t)
		{
			return su;
		}
	}
	return su;
}
signed main()
{
	cin >> n >> t;
	for(int i = 0; i < n; i++)
		cin >> k[i];
	int ans = 2LL * 1e18L + 4LL, lo = 1, hi = 1e18L + 4LL;
	while(lo <= hi)
	{
		int mid = (lo + hi) / 2;
		if(check(mid) >= t)
		{
			ans = min(ans, mid);
			hi = mid - 1;
		}
		else
		{
			lo = mid + 1;
		}
	}
	cout << ans << '\n';	
}
