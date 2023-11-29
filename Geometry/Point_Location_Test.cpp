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
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int slope = (x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1);
    if(slope > 0) cout<<"LEFT"<<endl;
    else if(slope < 0) cout<<"RIGHT"<<endl;
    else cout<<"TOUCH"<<endl;
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


