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
    vector<int> nums(n),ans(n,0);
    for(auto &x : nums) cin>>x;
    stack<int> stk;
    for(int i=0;i<n;i++){
        if(stk.empty() or nums[stk.top()] < nums[i]){
            if(stk.empty()) stk.push(i);
            else {
                ans[i] = stk.top()+1;
                stk.push(i);
            }
        }
        else{
            while(stk.size()>0 and nums[stk.top()] >= nums[i]){
                stk.pop();
            }
            if(stk.size() > 0) ans[i] = stk.top()+1;
            stk.push(i);
        }
    }
    for(auto x : ans) cout<<x<<" ";
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
