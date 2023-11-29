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
    int n, target; cin>>n>>target;
    vector<int> coins(n);
    for(auto &x : coins) cin>>x;
    vector<int> dp(target+1,INT_MAX);
    dp[0] = 0;
    for(int i=1;i<=target;i++){
        for(int j=0;j<n;j++){
            if(i - coins[j] >= 0){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    cout<<(dp[target] == INT_MAX?-1:dp[target])<<endl;
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
