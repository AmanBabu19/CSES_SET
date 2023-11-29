/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7
void DFS(vector<int> adj[], int src, vector<bool>&visited){
    visited[src] = true;
    for(auto nbr : adj[src]){
        if(!visited[nbr]) DFS(adj,nbr,visited);
    }
}
void solve(){
    int n,m; cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>visited(n,false);
    vector<int> path;
    for(int i=0;i<n;i++){
        if(visited[i] == false){
            path.push_back(i+1);
            DFS(adj,i,visited);
        }
    }
    // for(auto x : visited) cout<<x<<endl;
    cout<<path.size()-1<<endl;
    for(int i=1;i<path.size();i++){
        cout<<path[i-1]<<" "<<path[i]<<endl;
    }
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
