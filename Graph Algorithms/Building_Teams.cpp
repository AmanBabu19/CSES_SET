/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7
bool DFS(vector<int> adj[], int src, int clr, vector<int>&clrs){
    clrs[src] = clr;
    for(auto nbr : adj[src]){
        if(clrs[nbr] == -1){
            if(!DFS(adj,nbr,3-clr,clrs)) return false;
        }
        else if(clrs[nbr] == clr) return false;
    }
    return true;
}
void solve(){
    int n,m; cin>>n>>m;
    vector<int> clrs(n,-1);
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(clrs[i] == -1){
            if(!DFS(adj,i,1,clrs)){
                cout<<"IMPOSSIBLE"<<endl;
                return;
            }
        }
    }
    for(auto x : clrs) cout<<x<<" ";
    cout<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
