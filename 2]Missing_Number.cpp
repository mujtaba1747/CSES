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
	int su = 0, x;
	for(int i = 0; i < n - 1; i++)
	{
		cin >> x;
		su += x;
	}
	cout << ((n)*(n + 1))/2 - su;
}