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
    vector<int> nums(n);
    for(auto &x : nums) cin>>x;
    int mx = *max_element(nums.begin(), nums.end());
    vector<int> fact(mx+1, 0);
    for(auto x : nums) fact[x]++;
    for(int i=mx;i>=1;i--){
        int cnt = 0;
        for(int j=i;j<=mx;j+=i){
            cnt += fact[j];
        }
        if(cnt >= 2){
            cout<<i<<endl;
            return;
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
