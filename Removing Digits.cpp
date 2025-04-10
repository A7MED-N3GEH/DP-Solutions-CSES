#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
void solve(){
    int n;cin>>n;
 
    vector<int>dp(n+1 , INT_MAX);
    dp[0] = 0;
 
    for(int i = 1 ; i<= n ; i++) // 458 / 10 = 45 / 10 = 4 / 10 = 0   
    {
        int x = i;
        while (x>0)
        {
            int dig = x %10;
            if(dig != 0)
            {
                dp[i] = min(dp[i] , dp[i - dig] + 1);
            }
            x/=10;
        }
    }
    cout<<dp[n];
}
int main() {
    solve();
    return 0;
}
