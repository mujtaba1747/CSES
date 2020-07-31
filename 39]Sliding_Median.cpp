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
struct BIT
{
	int N;
	vector < int > bit;
	void init(vector < int > &a)
	{
		N = a.size();
		bit.assign(N + 1, 0);
		for(int i = 0; i < a.size(); i++)
		{
			update(i + 1, a[i]);
		}
	}

	void update(int idx, int val)
	{
		while(idx <= N)
		{
			bit[idx] = (bit[idx] + val); // Appropriate Function (Can be modified accordingly)
			idx += (idx & -idx);
		}
	}
	int prefix(int idx)
	{
		int ans = 0;
		while(idx > 0)
		{
			ans += bit[idx];
			idx -= (idx & -idx);
		}
		return ans;
	}
	int query(int l, int r)
	{
		return prefix(r) - prefix(l - 1);
	}
	void updatemax(int idx, int val)
	{
		while(idx <= N)
		{
			bit[idx] = max(bit[idx], val);
			idx += (idx & -idx);
		}
	}
	int prefmax(int idx)
	{
		int ans = -2e9;
		while(idx > 0)
		{
			ans = max(ans, bit[idx]);
			idx -= (idx & -idx);
		}
		return ans;
	}
	int find_by_order(int k) //Useful in Cumulative Frequency Array
	{
		int lo = 1, hi = N, mid;
		int ans = 1e9;
		while(lo <= hi)
		{
			int mid = (lo + hi) / 2;
			int su = query(1, mid);
			if(su < k)
			{
				lo = mid + 1;
			}
			else
			{
				hi = mid - 1;
				ans = min(ans, mid);
			}		
		}
		return ans; // ans is smallest index at which query(1, ans) >= k
	}
}B;

signed main()
{
	fast_io
	int n, k;
	cin >> n >> k;
	vector < int > a(n);
	map < int, int > mp;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]] = 0;
	}
	int cu = 1;
	for(auto &z : mp)
	{
		z.se = cu++;
	}
	vector < int > lookup(mp.size() + 4);
	for(auto z : mp)
	{
		lookup[z.se] = z.fi;
	}
	vector < int > f(MAXN);
	B.init(f);
	vector < int > ans;	

	for(int i = 0; i < n; i++)
	{
		a[i] = mp[a[i]];
		if(i >= k)
		{
			f[a[i - k]]--;
			B.update(a[i - k], -1);
		}
		f[a[i]]++;
		B.update(a[i], 1);
		if(i >= k - 1)
			ans.pb(lookup[(B.find_by_order(k/2 + (k%2)))]);
	}
	for(auto z : ans)
		cout << z << ' ';
	cout << '\n';
	return 0;
}