// Seek Knowledge from the Cradle to the Grave
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	int x[n];
	for(auto &z : x) {
		cin >> z;
	}
	int ans = 1;
	sort(x, x + n);
	for(int i = 0; i < n; i++) {
		if (ans < x[i]) {
			break;
		} else {
			ans += x[i];
		}
	}
	cout << ans;
}