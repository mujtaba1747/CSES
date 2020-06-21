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
	cout << n << ' ';
	while(n != 1)
	{
		if(n % 2)
		{
			n *= 3;
			n += 1;
		}
		else
			n /= 2;
		cout << n << ' ';
	}
}