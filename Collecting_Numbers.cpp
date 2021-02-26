// Seek Knowledge from the Cradle to the Grave
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin >> n;
	int pos[n + 1], x;
	for(int i = 1; i <= n; i++) {
		cin >> x;
		pos[x] = i;
	}
	int ans = 1, cur = pos[1];
	for(int i = 2; i <= n; i++) {
		if (cur > pos[i]) {
			ans++;
		}
		cur = pos[i];
	}
	cout << ans;
}