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
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> parent(n+1,-1);
    vector<bool>visited(n+1,false);
    queue<int> q;
    q.push(1);
    visited[1] = true;
    vector<int> path;
    bool flag = false;
    while(!q.empty()){
        int node = q.front();
        if(node == n){
            while(parent[node]!=-1){
                path.push_back(node);
                node = parent[node];
            }
            path.push_back(node);
            flag = true;
            break;
        }
        for(auto nbr : adj[node]){
            if(visited[nbr] == false){
                parent[nbr] = node;
                visited[nbr] = true;
                q.push(nbr);
            }
        }
        q.pop();
    }
    if(flag){
        cout<<path.size()<<endl;
        reverse(path.begin(),path.end());
        for(auto x : path) cout<<x<<" ";
    }
    else cout<<"IMPOSSIBLE"<<endl;
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
