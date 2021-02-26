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
   int n, q;
   cin >> n >> q;
   int nex[n + 1];
   int lift[n + 2][36];
   for(int i = 1; i <= n; i++)
   {
      cin >> nex[i];
      lift[i][0] = nex[i];
   }
   for(int i = 1; i <= 34; i++)
   {
      for(int j = 1; j <= n; j++)
      {
         lift[j][i] = lift[ lift[j][i - 1] ][ i - 1 ];
      }
   }
   while(q--)
   {
      int k, x;
      cin >> x >> k;
      int ans = x;
      for(int i = 34; i >= 0; i--)
      {
         if((1LL << i) & k)
         {
            ans = lift[ ans ][i];
         }
      }
      cout << ans << '\n';
   }
}