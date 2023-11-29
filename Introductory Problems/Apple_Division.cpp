/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7
void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    int totalSum = 0, ans = INT_MAX;
    for(auto &x : nums){
        cin>>x;
        totalSum += x;
    }
    for(int i=0;i<(1<<n);i++){
        int curr = 0;
        for(int j=0;j<n;j++){
            if((1<<j) & i) curr += nums[j];
        }
        ans = min(ans, abs(totalSum - 2*curr));
    }
    cout<<ans;
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
