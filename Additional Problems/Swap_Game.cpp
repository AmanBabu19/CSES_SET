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
    vector<int> mat(9,0);
    for(auto &x : mat) cin>>x;
    vector<int> to = mat;
    sort(to.begin(), to.end());
    int cnt = 0;
    for(int i=0;i<9;i++){
        if(mat[i] != to[i]){
            for(int j=i+1;j<9;j++){
                if(mat[j] == to[i]){
                    swap(mat[i], mat[j]);
                    cnt++;
                    break;
                }
            }
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
