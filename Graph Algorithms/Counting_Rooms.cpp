/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool isValid(vector<string>&grid, int x, int y){
    return x>=0 and x<grid.size() and y>=0 and y<grid[0].size();
}
void DFS(vector<string>&grid, int x, int y){
    grid[x][y] = '#';
    for(int i=0;i<4;i++){
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(isValid(grid,xx,yy) and grid[xx][yy] == '.'){
            DFS(grid,xx,yy);
        }
    }

}
void solve(){
    int n,m; cin>>n>>m;
    vector<string> grid(n,"");
    for(int i=0;i<n;i++) cin>>grid[i];
    int rooms = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] == '.'){
                rooms++;
                DFS(grid,i,j);
            }
        }
    }
    cout<<rooms;
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
