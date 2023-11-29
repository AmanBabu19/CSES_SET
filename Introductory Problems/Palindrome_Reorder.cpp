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
    string s; cin>>s;
    vector<int> hash(26,0);
    for(auto x : s) hash[x - 'A']++;
    bool flag = true;
    int oddcnt = 0;
    for(int i=0;i<26;i++) if(hash[i]&1) oddcnt++;
    if(s.size()%2 == 0 and oddcnt) flag = false;
    else if(s.size()%2 == 1 and oddcnt != 1) flag = false;
    string str = s;
    int left = 0, right = s.size()-1;
    int odx = -1;
    if(flag){
        for(int i=0;i<26;i++){
            int cnt = hash[i];
            char ch = i+'A';
            if(cnt&1) odx = i;
            else{
                while(cnt){
                    str[left++] = ch;
                    str[right--] = ch;
                    cnt -= 2;
                }
            }
        }
        if(odx != -1){
            char ch = odx + 'A';
            int cnt = hash[odx];
            while(cnt--){
                str[left++] = ch;
            }
        }
        cout<<str<<endl;
    }
    else cout<<"NO SOLUTION"<<endl;
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
