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

signed main()
{
   fast_io   
   int n, x;
   cin >> n >> x;
   vector < pair < int, int > > a(n);
   // map < int, set < int > > mp;
   for(int i = 0; i < n; i++)
   {
      cin >> a[i].fi;
      a[i].se = i;
      // mp[a[i].fi].insert(i);
   }
   // sort(a.begin(), a.end());
   map < int, set < pair < int, int > > > mp;
   set < int > sums;
   for(int i = 0; i < n; i++)
   {
      for(int j = i + 1; j < n; j++)
      {
         mp[a[i].fi + a[j].fi].insert({i, j});
         sums.insert(a[i].fi + a[j].fi);
      }
   }
   for(auto z : sums)
   {
      int h = x - z;
      int x1, x2;
      tie(x1, x2) = *mp[z].begin();
      if(mp.count(h))
      for(auto z : mp[h])
      {
         if(z.fi != x1 && z.se != x2 && z.se != x1 && z.fi != x2)
         {
            cout << ++a[x1].se << " " << ++a[x2].se << " " << ++a[z.fi].se << " " << ++a[z.se].se << "\n";
            return 0;
         }
      }
   }

   cout << "IMPOSSIBLE\n";
}