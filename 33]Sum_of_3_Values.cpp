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
pair < int, int > _2sum(int l, int r, int x, vector < pair < int, int > > &a, int ex)
{
   pair < int, int > pa;
   pa.first = -1;
   pa.second = -1;
   int L = l, R = r;
   if(R == ex)
      R--;
   if(L == ex)
      L++;
   while(L < R)
   {
      if(a[L].fi + a[R].fi > x)
      {
         R--;
         if(R == ex)
            R--;
      }
      else if(a[L].fi + a[R].fi < x)
      {
         L++;
         if(L == ex)
            L++;
      }
      else
      {
         pa.fi = a[L].se;
         pa.se = a[R].se;
         break;
      }
   }
   return pa;
}
signed main()
{
   fast_io   
   int n, x;
   cin >> n >> x;
   vector < pair < int, int > > a(n);
   for(int i = 0; i < n; i++)
   {
      cin >> a[i].fi;
      a[i].se = i;
   }
   sort(a.begin(), a.end());
   for(int i = 0; i < n; i++)
   {
      pair < int, int > pa;
      pa = _2sum(0, n - 1, x - a[i].fi, a, i);
      if(pa.fi != -1 && pa.se != -1)
      {
         cout << ++a[i].se << " " << ++pa.fi << " " << ++pa.se << "\n"; 
         return 0;
      }
   }
   cout << "IMPOSSIBLE\n";
}