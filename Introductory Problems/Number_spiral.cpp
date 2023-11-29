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
    int n,m; cin>>n>>m;
    if(n > m){
        if(n&1){
            cout<<(n-1)*(n-1) + m<<endl;
        }
        else{
            cout<<(n*n-m + 1)<<endl;
        }
    }
    else{
        if(m%2 == 0){
            cout<<(m-1)*(m-1) + n<<endl;
        }
        else{
            cout<<(m*m-n + 1)<<endl;
        }
    }
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
