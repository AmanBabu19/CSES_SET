/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
bool isPointLieInsideSegment(int x1, int y1, int x2, int y2, int x3, int y3){
    return (x3 >= min(x1, x2) and x3 <= max(x1, x2) and y3 >= min(y1, y2) and y3 <= max(y1, y2));
}
int pointOrientation(int x1, int y1, int x2, int y2, int x3, int y3){
    int slope = (y3 - y1)*(x2 - x1) - (y2 -y1)*(x3 - x1);
    if(slope > 0) return 1;
    else if(slope == 0) return 0;
    else return -1;
}
void solve(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int O1 = pointOrientation(x1,y1,x2,y2,x3,y3);
    int O2 = pointOrientation(x1,y1,x2,y2,x4,y4);
    int O3 = pointOrientation(x3,y3,x4,y4,x1,y1);
    int O4 = pointOrientation(x3,y3,x4,y4,x2,y2);
    if(O1*O2 == -1 and O3*O4 == -1) cout<<"YES"<<endl;
    else if(O1 == 0 and isPointLieInsideSegment(x1, y1, x2, y2, x3, y3)) cout<<"YES"<<endl;
    else if(O2 == 0 and isPointLieInsideSegment(x1, y1, x2, y2, x4, y4)) cout<<"YES"<<endl;
    else if(O3 == 0 and isPointLieInsideSegment(x3, y3, x4, y4, x1, y1)) cout<<"YES"<<endl;
    else if(O4 == 0 and isPointLieInsideSegment(x3, y3, x4, y4, x2, y2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
