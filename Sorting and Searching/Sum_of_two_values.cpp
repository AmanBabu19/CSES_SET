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
    int n,tar; cin>>n>>tar;
    vector<pair<int,int>> nums;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        nums.push_back({temp,i+1});
    }
    sort(nums.begin(),nums.end());
    int left = 0, right = n-1;
    while(left < right){
        if(nums[left].first + nums[right].first == tar){
            cout<<nums[left].second<<" "<<nums[right].second;
            return;
        }
        else if(nums[left].first + nums[right].first > tar){
            right--;
        }
        else left++;
    }
    cout<<"IMPOSSIBLE"<<endl;
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
