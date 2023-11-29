/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Aman Babu
Username - alwaysAnewbie
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    bool all = false;
    if (s[0] == 'B' or s[s.size() - 1] == 'B')
        all = true;
    for (int i = 1; i < s.size(); i++)
        if (s[i] == s[i - 1] and s[i] == 'B')
            all = true;
    int cntA = 0;
    for (auto x : s)
        if (x == 'A')
            cntA++;
    if (all)
    {
        cout << cntA << endl;
        return;
    }
    vector<int> grpA;
    int len = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            len++;
        else
        {
            if (len != 0)
                grpA.push_back(len);
            len = 0;
        }
        if (len != 0 and i == s.size() - 1)
            grpA.push_back(len);
    }
    sort(grpA.begin(), grpA.end(), greater<int>());
    grpA.pop_back();
    cout << accumulate(grpA.begin(), grpA.end(), 0) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
