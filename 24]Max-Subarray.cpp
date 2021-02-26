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
	int x[n];
	int dp[n];
	for(int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	dp[0] = x[0];
	int ans = dp[0];
	for(int i = 1; i < n; i++)
	{
		dp[i] = max(dp[i - 1], 0LL) + x[i];
		ans = max(ans, dp[i]);
	}
	cout << ans << '\n';
}