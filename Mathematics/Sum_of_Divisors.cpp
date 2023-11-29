/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int binExp(int a, int b){
    if(b == 1) return a;
    int half = binExp(a, b/2)%mod;
    if(b%2 == 0){
        return (half*half)%mod;
    }
    else{
        return ((((a%mod)*half)%mod)*half)%mod;
    }
}
int calc(int n){
    return ((((n%mod)*((n+1)%mod))%mod)*binExp(2, mod-2))%mod;
}
void solve(){
    int n; cin>>n;
    int sum = 0;
    for(int i=1,j;i<=n;i=j){
        int q = n/i;
        j = n/q + 1;
        // cout<<j<<" ";
        sum += (((q)%mod)*((calc(j-1)%mod - calc(i-1)%mod))%mod + mod)%mod;
        sum %= mod;
    }
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
