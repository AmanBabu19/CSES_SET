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
    vector<pair<int,int>> nums(n);
    for(auto &x : nums) cin>>x.first>>x.second;
    int area = 0;
    for(int i=0;i<n;i++){
        int x1 = nums[i].first, y1 = nums[i].second;
        int x2 = nums[(i+1)%n].first, y2 = nums[(i+1)%n].second;
        area += (x2*y1 - x1*y2);
    }
    cout<<abs(area)<<endl;
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
