/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define mod 1000000007
class segmenttree{
public:
    int n;
    vector<int> st;
    void init(int _n){
        this->n = _n;
        st.resize(4*n, INT_MAX);
    }
    void build(int start, int end,  int node, vector<int>&v){
        if(start == end){
            st[node] = v[start];
            return;
        }
        int mid = (start + end)/2;
        build(start, mid, 2*node+1, v);
        build(mid+1, end, 2*node+2, v);
        st[node] = min(st[2*node + 1], st[2*node + 2]);
    }
    void build(vector<int>&v){
        build(0,n-1,0,v);
    }
    int query(int start, int end,  int l, int r, int node){
        if(start > r or end < l) return INT_MAX;
        if(l<=start and end<=r) return st[node];
        int mid = (start + end)/2;
        int q1 = query(start, mid, l, r, 2*node+1);
        int q2 = query(mid+1, end, l, r, 2*node+2);
        return min(q1, q2);
    }
    int query(int l, int r){
        return query(0, n-1, l, r, 0);
    }
};
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n,q; cin>>n>>q;
    vector<int> nums(n);
    for(auto &x : nums) cin>>x;
    segmenttree tree;
    tree.init(nums.size());
    tree.build(nums);
    while(q--){
        int l,r; cin>>l>>r;
        l--,r--;
        cout<<tree.query(l,r)<<endl;
    }
    // cout<<tree.query(0, 4);
    return 0;
}
