/*-In the name of God-

Author : Syed Mujtaba
Seek knowledge from the Cradle to the Grave !!
https://www.linkedin.com/in/syed-mujtaba
*/

#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define ld              long double
#define ll              long long
#define pb              push_back
#define fi              first
#define se              second
#define MAXN            200064
#define mod             1000000007  //998244353 // 1e9 + 7
#define MAX             8000000000000000064LL
#define MIN            -8000000000000000064LL
#define mt              make_tuple
#define eps             1e-6
#define endl            '\n'
#define test            int T_T; cin>>T_T; while(T_T--)
#define fast_io         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
	fast_io
	int n, k;
	cin >> n >> k;
	int lo = 1, hi = 2e14 + 4;
	int mid;
	int ans = hi, an;
	int a[n];
	int u = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	while(lo <= hi)
	{
		mid = (lo + hi) / 2;
		int su = 0;
		int pp = 0;
		int p = MIN;
		for(int i = 0; i < n; i++)
		{
			if(su + a[i] > mid)
			{
				++pp;
				p = max(p, su);
				su = a[i];
				p = max(p, su);
			}
			else
			{
				su += a[i];
				p = max(p, su);
			}
		}
		++pp;
		if(pp <= k)
		{
			ans = min(ans, p);
			hi = mid - 1;
		}
		else
		{
			lo = mid + 1;
		}
	}
	cout << ans << '\n';
   
}