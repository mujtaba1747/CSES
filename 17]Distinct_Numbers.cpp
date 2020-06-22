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
	int x;
	set < int > s;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
}