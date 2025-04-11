#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
void solve()
{
    int n;cin>>n;
    vector<string>grid(n);
    
    for(auto &i:grid)cin>>i; 
 
    vector<vector<int>>dp(n , vector<int>(n , 0));
    if(grid[0][0] == '*')
    {
        cout<<0;
        return;
    }
    dp[0][0] = 1;
    for(int i = 0 ; i<n ; i++)
    {
        for(int o = 0 ; o<n ; o++)
        {
            if(grid[i][o] == '*')continue;
            if(i > 0 ) dp[i][o] = (dp[i][o] + dp[i-1][o])%MOD; // left to right
            if(o > 0 ) dp[i][o] = (dp[i][o] + dp[i][o-1])%MOD; // up to down
        }
    }
    cout<<dp[n-1][n-1];
}
 
int main()
{
    solve();
    return 0;
}
