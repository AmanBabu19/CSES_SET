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
    int n,k,x; cin>>n>>k>>x;
    vector<int> nums(n);
    for(auto &x : nums) cin>>x;
    set<int> st;
    for(int i=0;i<k;i++){
        if(nums[i] < 0) st.insert(nums[i]);
    }
    vector<int> ans;
    int front = 0;
    for(int i=k;i<=n;i++){
        auto it = st.begin();
        advance(it,x-1);
        if(*it<=0) cout<<*it<<" ";
        else cout<<0<<" ";
        st.erase(st.lower_bound(nums[front++]));
        if(i!=n and nums[i] < 0) st.insert(nums[i]);
    }
    
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
