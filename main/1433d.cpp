#include <bits/stdc++.h>
using namespace std;
// init template

// end template
// right, down
vector<pair<int,int>> directions = {{0,1}, {1,0}};


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        if (mp[v[0]] == n) { // all values from array are the same
            cout << "NO" << endl;
        } else {
            vector<pair<int,int>> ans;
            int cur = -1;
            for (int i =0; i<n; i++) {
                if (v[0] != v[i]) {
                    cur = i;
                    ans.push_back({1, i+1});
                }
            }
            for (int i =1; i<n; i++) {
                if (v[i] == v[0]) ans.push_back({cur+1, i+1});
            }
            cout << "YES" << endl;
            for (auto x: ans) cout << x.first << " " << x.second << endl;
        }
    }
    return 0;
}