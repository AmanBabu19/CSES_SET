/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int dp[20][2][10][2];
int f(string &s, int index, int tight, int prev, int leading_zero){
    if(index == s.size()) return 1;
    if(dp[index][tight][prev][leading_zero] != -1) return dp[index][tight][prev][leading_zero];
    int maxDigit = (tight == 1?s[index]-'0':9);
    int ans = 0;
    for(int i=0;i<=maxDigit;i++){
        //case of similar adjancent digits
        if(i==prev and i!=0){continue;}
        // case when '00' occurs in the number (but not at the start(seen from left side))
        if(i==prev and i==0 and leading_zero==0){continue;}
        ans += f(s, index+1, (tight & (i == (s[index] - '0'))), i, leading_zero&(i==0));
    }
    return dp[index][tight][prev][leading_zero] = ans;
}
void solve(){
    int l,r; cin>>l>>r;
    int sum = 0;
    memset(dp, -1, sizeof(dp));
    string t = to_string(r);
    sum = f(t,0,1,-1,1);
    string s = to_string(l-1);
    memset(dp, -1, sizeof(dp));
    if(l != 0) sum -= f(s,0,1,-1,1);
    cout<<sum<<endl;
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
