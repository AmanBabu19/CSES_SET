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
    int n,x; cin>>n>>x;
    vector<int>nums(n);
    for(auto &x : nums) cin>>x;
    int currsum = 0, cnt = 0;
    int left = 0, right = 0;
    while(right < n){
        if(currsum + nums[right] <= x){
            currsum += nums[right];
            if(currsum == x) cnt++;
            right++;
        }
        else{
            currsum -= nums[left];
            if(currsum == x) cnt++;
            left++;
        }
    }
    cout<<cnt<<endl;
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
