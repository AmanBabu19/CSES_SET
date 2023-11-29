/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void DFS(vector<int> adj[], vector<int>&subordinates, int src, int parent){
    int cnt = 0;
	for(auto nbr : adj[src]){
        if(nbr != parent){
			DFS(adj, subordinates, nbr, src);
			cnt += 1 + subordinates[nbr];
		}
	}
	subordinates[src] = cnt;
}
void solve(){
	int n; cin>>n;
	vector<int> adj[n];
	vector<int> parent(n,-1);
	for(int i=1;i<n;i++){
		int p; cin>>p;
		p--;
		parent[i] = p;
		adj[i].push_back(p);
		adj[p].push_back(i);
	}
	vector<int> subordinates(n,0);
	DFS(adj, subordinates, 0, -1);
	for(auto x : subordinates) cout<<x<<" ";
	cout<<endl;
}
int32_t main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int test=1;
	//cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
