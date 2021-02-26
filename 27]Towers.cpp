// Author : Syed Mujtaba
// Seek knowledge from the Cradle to the Grave !!

#include <bits/stdc++.h>
using namespace std;
#define fi              first
#define se              second
#define int long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    fast_io
    int n;
    cin >> n;
    multiset < int > ms;
    vector < int > v(n);
    for(auto &z : v)
    {
    	cin >> z;
    }
    for(int i = 0; i < n; i++)	
    {
    	auto z = ms.upper_bound(v[i]);
    	if(z != ms.end())
    	{
    		ms.insert(v[i]);
    		ms.erase(ms.find(*z));
    	}
    	else
    	{
    		ms.insert(v[i]);
    	}
    }
    cout << ms.size() << '\n';
}