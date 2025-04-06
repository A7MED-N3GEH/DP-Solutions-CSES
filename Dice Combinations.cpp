#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
void solve() {
    int n;cin>>n;
    vector<int>dp(n+1 , 0);
    dp[0] = 1;

    for(int i  =1 ; i<= n ; i++) // 1 2 3 4 5 6 7 8 .... n 
    {
        for(int o = 1 ; o <= 6 ;o++) // dice => { 1 2 3 4 5 6}
        {
            if(i-o >= 0)dp[i] += dp[i-o];
            dp[i] %=  MOD;
        }
    }
    cout<<dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
