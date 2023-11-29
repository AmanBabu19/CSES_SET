/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie 
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
// #define long longlong long
#define mod 1000000007
class segmentTree{
public:    
    long long n;
    vector<long long> st;
    void init(long long _n){
        this->n = _n;
        st.resize(4*n, 0);
    }
    void build(long long start, long long end,  long long node, vector<long long>&v){
        if(start == end){
            st[node] = v[start];
            return;
        }
        long long mid = (start + end)/2;
        build(start, mid, 2*node+1, v);
        build(mid+1, end, 2*node+2, v);
        st[node] = st[2*node + 1] + st[2*node + 2];
    }
    void build(vector<long long>&v) {build(0,n-1,0,v);}


    long long query(long long start, long long end,  long long l, long long r, long long node){
        if(start > r or end < l) return 0;
        if(l<=start and end<=r) return st[node];
        long long mid = (start + end)/2;
        long long q1 = query(start, mid, l, r, 2*node+1);
        long long q2 = query(mid+1, end, l, r, 2*node+2);
        return q1 + q2;
    }
    long long query(long long l, long long r) {return query(0, n-1, l, r, 0);}


    void update(long long start, long long end, long long node, long long idx, long long val){
        if(start == end){
            st[node] = val;
            return;
        }
        long long mid = (start + end)/2;
        if(mid >= idx) update(start, mid, 2*node+1, idx, val);
        else update(mid+1, end, 2*node+2, idx, val);
        st[node] = st[2*node+1] + st[2*node+2];
    }
    void update(long long idx,  long long val) { update(0, n-1, 0, idx, val); }
};
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    long long n,q; cin>>n>>q;
    vector<long long> nums(n);
    for(auto &x : nums) cin>>x;
    segmentTree T;
    T.init(n);
    T.build(nums);
    while(q--){
        long long type; cin>>type;
        if(type == 1){
            long long idx, val; cin>>idx>>val;
            T.update(idx-1, val);
        }
        else{
            long long l,r; cin>>l>>r;
            cout<<T.query(l-1,r-1)<<endl;
        }
    }
    return 0;
}
