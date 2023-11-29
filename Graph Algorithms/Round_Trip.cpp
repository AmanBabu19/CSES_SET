/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7
bool DFS(vector<int>adj[], int src, vector<bool>&visited, int prt, vector<int> &parent){
    visited[src] = true;
    parent[src] = prt;
    for(auto nbr : adj[src]){
        if(visited[nbr] == false){
            if(DFS(adj,nbr,visited,src,parent)) return true;
        }
        else if(nbr != prt){
            return true;
        }
    }
    return false;
}
void solve(){
    int n,m; cin>>n>>m;
    vector<bool>visited(n, false);
    vector<int> adj[n];
    vector<int> path;
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> parent(n,-1);
    DFS(adj,2,visited,-1,parent,path);
    for(auto x : ans) cout<<x+1<<" ";
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
