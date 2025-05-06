#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/445/A
// init template

// end template
// right, down
vector<pair<int,int>> directions = {{0,1}, {1,0}};
void dfs(vector<string> &grid, const  int row, const int col, const char cur) {
    grid[row][col] = grid[row][col] == '.' ? cur : grid[row][col];
    for (auto x: directions) {
        int nx = row + x.first;
        int ny = col + x.second;
        if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
            dfs(grid, nx, ny, (cur == 'W' ? 'B' : 'W'));
        }
    }
}

int main() {
    int n,m; cin >> n >> m;
    vector<string> grid;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        grid.push_back(str);
    }
    //
    dfs(grid, 0,0, 'W');
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}