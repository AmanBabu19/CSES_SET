/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
vector<string> solve(int n){
    if(n == 1) return {"0", "1"};
    vector<string> strs = solve(n-1);
    vector<string> ans;
    for(auto str : strs){
        str = str + '0';
        ans.push_back(str);
    }
    reverse(strs.begin(),strs.end());
    for(auto str : strs){
        str = str + '1';
        ans.push_back(str);
    }
    return ans;
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
        int n; cin>>n;
        vector<string> strs = solve(n);
        for(auto x : strs) cout<<x<<endl;
    }
    return 0;
}
