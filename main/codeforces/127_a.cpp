#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
// solved by LocotoDev
// https://codeforces.com/contest/727/submission/316895679
// template


// end template
const int MX = 2000;
vector<vector<int>> v(MX, vector<int>());

bool dfs(const ll a, const ll b, vector<ll> &ans) {
    if (a > b) return false;
    if (a == b) return true;
    if (dfs(a*10+1, b, ans)) {
        ans.push_back(a*10+1);
        // ans.push_back(b);
        return true;
    }
    if (dfs(a*2, b, ans)) {
        ans.push_back(a*2);
        // ans.push_back(b);
        return true;
    }
    return false;
}

int main() {
    ll a,b; cin >> a >> b;
    vector<ll> ans;
    bool sol = dfs(a, b, ans);
    if (sol) {
        ans.push_back(a);
        cout << "YES" << endl;
        cout << ans.size() << endl;
        int len = ans.size();
        for (int i = len-1; i >= 0; i--) {
            cout << ans[i] << " ";
        }
    }else cout << "NO" << endl;
    return 0;
}