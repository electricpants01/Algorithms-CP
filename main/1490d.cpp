#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1433/D
// init template

// end template
// right, down
vector<pair<int,int>> directions = {{0,1}, {1,0}};

void solve(int left, int right, vector<int> &v, vector<int> &ans, int curDepth) {
    if (right < left) return;
    if (left == right) {
        ans[left] = curDepth;
        return;
    }
    int mx = left;
    for (int i=left+1; i<=right; i++) {
        if (v[i] > v[mx]) mx = i;
    }
    ans[mx] = curDepth;
    solve(left, mx-1, v, ans, curDepth+1);
    solve(mx+1, right, v, ans, curDepth+1);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        //
        solve(0, n-1, v, ans, 0);
        for (auto x: ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}