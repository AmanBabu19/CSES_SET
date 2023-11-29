/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int f(int maxWeight, vector<int>&price, vector<int>&pages, int idx, int memo[n+1][maxWeight+1]){
    if(idx == price.size()) return 0;
    if(memo[idx][maxWeight] != -1) return memo[idx][maxWeight];
    int notTake = f(maxWeight, price, pages, idx+1, memo);
    int Take = 0;
    if(maxWeight >= price[idx]){
        Take = pages[idx] + f(maxWeight-price[idx], price, pages, idx+1, memo);
    }
    return memo[idx][maxWeight] = max(notTake, Take);
}
void solve(){
    int n, maxWeight; cin>>n>>maxWeight;
    vector<int> price(n), pages(n);
    for(auto &x : price) cin>>x;
    for(auto &x : pages) cin>>x;
    
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
