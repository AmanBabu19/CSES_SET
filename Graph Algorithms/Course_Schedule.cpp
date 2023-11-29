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
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
    }
    vector<int> indegree(n,0);
    for(int i=0;i<n;i++){
        for(auto nbr : adj[i]){
            indegree[nbr]++;
        }
    }
    queue<int> q;
    for(int i=0;i<n;i++) if(indegree[i] == 0) q.push(i);
    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        topo.push_back(node+1);
        for(auto nbr : adj[node]){
            indegree[nbr]--;
            if(indegree[nbr] == 0) q.push(nbr);
        }
        q.pop();
    }
    if(topo.size() < n) cout<<"IMPOSSIBLE"<<endl;
    else for(auto x : topo) cout<<x<<" ";
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
