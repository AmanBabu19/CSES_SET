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
    int n; cin>>n;
    bool flag = true;
    vector<int> first, second;
    if((n*(n+1))%4 == 0){
        while(n > 0){
            if(flag){
                first.push_back(n--);
                if(n != 0) second.push_back(n--);
                flag = !flag;
            }
            else{
                second.push_back(n--);
                if(n != 0) first.push_back(n--);
                flag = !flag;
            }
        }
        cout<<"YES"<<endl;
        cout<<first.size()<<endl;
        for(auto x : first) cout<<x<<" ";
        cout<<endl;
        cout<<second.size()<<endl;
        for(auto x : second) cout<<x<<" ";
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../", "w", stdout);
#endif
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
