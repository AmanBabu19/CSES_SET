/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void triplet(int n, vector<int> &arr, int target){
    vector<pair<int,int>> nums;
    for(int i=0;i<n;i++) nums.push_back({arr[i],i+1});
    sort(arr.begin(),arr.end());
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i != 0 and arr[i] == arr[i-1]) continue;
        int j = i+1, k = n-1;
        while(j<k){
            int X = target - arr[i];
            if(arr[j] + arr[k] < X) j++;
            else if(arr[j] + arr[k] > X) k--;
            else{
                cout<<nums[i].second<<" "<<nums[j].second<<" "<<nums[k].second<<endl;
                return;
            } 
        } 
    }
    cout<<"IMPOSSIBLE"<<endl;
}
void solve(){
    int n,tar; cin>>n>>tar;
    vector<int> nums(n);
    for(auto &x : nums) cin>>x;
    triplet(n,nums,tar);
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
