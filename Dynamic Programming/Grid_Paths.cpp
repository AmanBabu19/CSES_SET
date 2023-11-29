/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve(){
    int n; cin>>n;
    vector<string> strs(n);
    for(auto &x : strs) cin>>x;
    vector<vector<int>> dp(n, vector<int>(n,0));
    for(int i=0;i<n;i++){
        if(strs[i][0] != '*') {
            dp[i][0] = 1;
        }
        else break;
    }
    for(int i=0;i<n;i++){
        if(strs[0][i] != '*') {
            dp[0][i] = 1;
        }
        else break;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(strs[i][j] != '*') dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
            else dp[i][j] = 0;
        }
    }
    cout<<dp[n-1][n-1];
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
