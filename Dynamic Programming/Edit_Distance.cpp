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
    string a, b; cin>>a>>b;
    vector<vector<int>> dp(a.size()+1, vector<int>(b.size()+1, 0));
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){
            if(i == 0) dp[i][j] = j;
            else if(j == 0) dp[i][j] = i;
            else{
                if(a[i-1] == b[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i-1][j-1], dp[i][j-1]});
                }
            }
        }
    }
    cout<<dp[a.size()][b.size()]<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
