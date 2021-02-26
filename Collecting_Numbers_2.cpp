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
	int n, m;
	cin >> n >> m;
	int pos[n + 1], x, a[n + 1];
	for(int i = 1; i <= n; i++) {
		cin >> x;
		pos[x] = i;
		a[i] = x;
	}
	int ans = 1, cur = pos[1];
	for(int i = 2; i <= n; i++) {
		if (cur > pos[i]) {
			ans++;
		}
		cur = pos[i];
	}
	int p1, p2;
	while(m--) {
		cin >> p1 >> p2;
		if(a[p1] != n) {
			if (pos[a[p1] + 1] >= p1 && pos[a[p1] + 1] <= p2) {
				ans++;
			} else if (pos[a[p1] + 1] <= p1 && pos[a[p1] + 1] >= p2) {
				ans--;
			}
		}
		if (a[p1] != 1) {
			if (pos[a[p1] - 1] >= p1 && pos[a[p1] - 1] <= p2) {
				ans--;
			} else if (pos[a[p1] - 1] <= p1 && pos[a[p1] - 1] >= p2) {
				ans++;
			}	
		}
		// cout << ans << endl;
		// if( abs(a[p1] - a[p2]) > 1) {
		if(a[p2] != n) {
			if (a[p2] + 1 != a[p1] && pos[a[p2] + 1] >= p2 && pos[a[p2] + 1] <= p1) {
				ans++;
			} else if (a[p2] + 1 != a[p1] && pos[a[p2] + 1] <= p2 && pos[a[p2] + 1] >= p1) {
				ans--;
			}
		}
		if (a[p2] != 1) {
			if (a[p2] - 1 != a[p1] && pos[a[p2] - 1] >= p2 && pos[a[p2] - 1] <= p1) {
				ans--;
			} else if (a[p2] - 1 != a[p1] && pos[a[p2] - 1] <= p2 && pos[a[p2] - 1] >= p1) {
				ans++;
			}
		}	
		// }
		pos[a[p1]] = p2;
		pos[a[p2]] = p1;
		swap(a[p1], a[p2]);
		cout << ans << '\n';
	}
	
}