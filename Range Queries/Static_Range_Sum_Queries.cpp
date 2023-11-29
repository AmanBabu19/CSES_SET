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
    int n,q; cin>>n>>q;
    vector<int> nums(n), prefSum(n, 0);
    int currSum = 0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        currSum += nums[i];
        prefSum[i] = currSum;
    }
    while(q--){
        int l,r; cin>>l>>r;
        l--, r--;
        cout<<(prefSum[r]-(l==0?(int)0:prefSum[l-1]))<<endl;
    }
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
