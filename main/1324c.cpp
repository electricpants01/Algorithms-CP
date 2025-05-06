#include <bits/stdc++.h>
using namespace std;
// init template

// end template

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int len = s.length();
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < len; i++) {
            if (s[i] == 'R') v.push_back(i+1);
        }
        v.push_back(len+1);
        int v_size = v.size();
        int ans = 0;
        for (int i=1;i<v_size; i++) {
            ans = max(ans, v[i] - v[i-1]);
        }
        cout << ans << endl;
        v.clear();
    }
    return 0;
}