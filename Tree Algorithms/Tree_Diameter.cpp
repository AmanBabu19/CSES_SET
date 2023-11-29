/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
vector<int> depth;
void DFS(vector<int> adj[], int src, int prt = -1){
    for(auto nbr : adj[src]){
        if(nbr == prt) continue;
        depth[nbr] = depth[src] + 1;
        DFS(adj, nbr, src);
    }
}
void solve(){
    int n; cin>>n;
    depth.resize(n+1,0);
    vector<int>adj[n];
    for(int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(adj, 0, -1);
    int mx_depth = -1;
    int mx_node;
    for(int i=0;i<n;i++){
        if(mx_depth < depth[i]){
            mx_depth = depth[i];
            mx_node = i;
        }
        depth[i] = 0;
    }
    DFS(adj, mx_node, -1);
    for(int i=0;i<n;i++){
        if(mx_depth < depth[i]){
            mx_depth = depth[i];
        }
    }
    depth.clear();
    cout<<mx_depth<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
