/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int binaryExponentiation(int a, int b){
    if(b == 1) return a;
    int half = binaryExponentiation(a,b/2);
    if(b%2 == 1){
        return (((a*half)%mod)*half)%mod;
    }
    else{
        return (half*half)%mod;
    }
}
void solve(){
    int a,b; cin>>a>>b;
    if(a == 0 and b == 0) cout<<1<<endl;
    else if(b == 0) cout<<1<<endl;
    else cout<<binaryExponentiation(a,b)<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
