/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve(int n, int a, int b, int c){
    if(n <= 0) return;
    solve(n-1, a, c, b);
    cout<<a<<" "<<c<<endl;
    solve(n-1, b, a, c);
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
        cout<<pow(2,n)-1<<endl;
        solve(n, 1, 2, 3);
    }
    return 0;
}
