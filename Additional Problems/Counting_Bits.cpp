/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int power(int a, int b){
    if(b == 0) return 1;
    int half = power(a,b/2);
    if(b%2 == 0) return half*half;
    else return a*half*half;
}
int cntDigit(int n){
    int cnt = 0;
    while(n > 0){
        n>>=1;
        cnt++;
    }
    return cnt;
}
int solve(int n){
    int digits = cntDigit(n);
    if(digits == 0 or digits == 1) return n;
    int first = (power(2, digits-1)>>1)*(digits-1);
    int second = n - power(2, digits-1);
    int third = solve(second);
    // cout<<first<<" "<<second<<" "<<endl;
    return first+second+third+1;
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
        int n; cin>>n;
        // cout<<n<<endl;
        cout<<solve(n)<<endl;
    }
    return 0;
}
