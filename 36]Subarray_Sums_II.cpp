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
	int n, x;
	cin >> n >> x;
	map < int, int > mp;
	mp[0] = 1;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}   
	int su = 0;
	int ans = 0;
	for(int i = 0; i < n; ++i)
	{
		su += a[i];
		if(mp.count(su - x))
		{
			ans += mp[su - x];
		}
		mp[su]++;
	}
	cout << ans << '\n';
   
}