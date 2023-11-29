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
    vector<pair<int,int>> adj[n];
    vector<int> dist(n,100000000000000000);
    vector<bool>visited(n,false);
    for(int i=0;i<m;i++){
        int u,v,cost; cin>>u>>v>>cost;
        u--,v--;
        adj[u].push_back({v,cost});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});
    dist[0] = 0;
    while(!pq.empty()){
        int cost = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if(visited[node]) continue;
        visited[node] = true;
        for(auto nbr : adj[node]){
            int newnode = nbr.first;
            int newcost = nbr.second;
            if(dist[newnode] > cost + newcost){
                dist[newnode] =  cost + newcost;
                pq.push({(cost + newcost), newnode});
            }
        }
    }
    for(auto x : dist) cout<<x<<" ";
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
