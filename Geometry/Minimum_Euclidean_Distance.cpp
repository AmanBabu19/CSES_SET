/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int f(vector<pair<int,int>>& nums){
    int dist = 1e18;
    for(int i=1;i<nums.size();i++){
        int x1 = nums[i-1].first, y1 = nums[i-1].second;
        int x2 = nums[i].first, y2 = nums[i].second;
        int curr_dist = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
        dist = min(dist, curr_dist);
    } 
    return dist;
}
void solve(){
    int n; cin>>n;
    vector<pair<int,int>> nums1, nums2;
    for(int i=0;i<n;i++){
        int u,v; cin>>u>>v;
        nums1.push_back({u,v});
        nums2.push_back({v,u});
    }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int dist = min(f(nums1), f(nums2));
    cout<<dist<<endl;
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
