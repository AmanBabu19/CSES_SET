/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
string dir = "ULRD";
bool isValid(int x, int y, int row, int col){
    return x>=0 and y>=0 and x<row and y<col;
}
void solve(){
    int rows, cols; cin>>rows>>cols;
    vector<vector<char>> grid(rows, vector<char>(cols, '.'));
    vector<vector<char>> path(rows, vector<char>(cols, '#'));
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    int a,b; 
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>grid[i][j];
            if(grid[i][j] == 'A'){
                a = i;
                b = j;
            }
        }
    }
    vector<char> ans;
    queue<pair<int,int>> q;
    q.push({a,b});
    visited[a][b] = true;
    bool flag = false;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        if(grid[x][y] == 'B'){
            while(true){
                ans.push_back(path[x][y]);
                if(ans.back() == 'L') y++;
                if(ans.back() == 'R') y--;
                if(ans.back() == 'U') x++;
                if(ans.back() == 'D') x--;
                if(a == x and b == y) break;
            }
            flag = true;
            break;
        }
        for(int i=0;i<4;i++){
            int xx = x + dx[i];
            int yy = y + dy[i];
            char d = dir[i];
            if(isValid(xx,yy,rows,cols) and grid[xx][yy] != '#' and !visited[xx][yy]){
                path[xx][yy] = d;
                visited[xx][yy] = true;
                q.push({xx,yy});
            }
        }
        q.pop();
    }

    if(flag){
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        while(ans.size()) cout<<ans.back(), ans.pop_back();
    }
    else cout<<"NO"<<endl;
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
