#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;
void solve() {
   int n,x;cin>>n>>x;
   vector<int>coins(n);
   for(int i = 0 ; i<n ; i++)cin>>coins[i];

   vector<int>dp(x+1 ,INT_MAX);
   dp[0] = 0;
   for(int i = 1 ; i <= x ;i++)
   {
        for(auto coin : coins)
        {
            if(i - coin >= 0 )dp[i] = min(dp[i] , dp[i-coin]+1);
        }
   }
   if(dp[x] == INT_MAX)
   {
       cout<<-1;
   }else   cout<<dp[x];
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
