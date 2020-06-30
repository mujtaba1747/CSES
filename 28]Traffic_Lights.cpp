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
    int x, n;
    cin >> x >> n;
    set < pair < int, int > > s;
    s.insert({x, 0});
    map < int, int > mp;
    mp[x]++;
    int l, r, cut;
    for(int i = 0; i < n; i++)
    {
    	cin >> cut;
    	auto z = s.lower_bound({cut, 0});
		l = z -> se;
		r = z -> fi;
		if(cut == l || cut == r) continue;

		mp[r - l]--;
		s.erase({r, l});
		if(mp[r - l] == 0) mp.erase(r - l);
		s.insert({cut, l});
		s.insert({r, cut});
		mp[cut - l]++;
		mp[r - cut]++;
		cout << (--mp.end()) -> fi << '\n';
    }
}