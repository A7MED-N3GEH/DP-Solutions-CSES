#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
void solve(){
    int n , x;cin>>n>>x;
    vector<int>v(n);
    for(auto &i : v)cin>>i;
 
    vector<int>dp(x+1 , 0);
    dp[0] = 1;
 
    for(auto it : v)
    {
        for(int i = it ; i <= x ; i++)
        {
            dp[i] += dp[i-it];
            dp[i] %= MOD;
        }
    }
    cout<<dp[x] ;
}
int main() {
    solve();
    return 0;
}
