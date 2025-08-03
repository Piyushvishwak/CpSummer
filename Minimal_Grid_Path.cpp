#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> g(n);
    for (auto &row : g) cin >> row;

    vector<pair<int,int>> curr{{0,0}};
    string ans(1, g[0][0]);
    vector<vector<bool>> vis(n, vector<bool>(n,false));

    for (int k = 1; k < 2*n-1; k++) {
        char mn = 'Z' + 1;
        vector<pair<int,int>> next;
        // find minimum char
        for (auto [x,y] : curr) {
            if (x+1<n) mn = min(mn, g[x+1][y]);
            if (y+1<n) mn = min(mn, g[x][y+1]);
        }
        // collect positions
        for (auto [x,y] : curr) {
            if (x+1<n && g[x+1][y]==mn && !vis[x+1][y]) {
                vis[x+1][y] = true;
                next.push_back({x+1,y});
            }
            if (y+1<n && g[x][y+1]==mn && !vis[x][y+1]) {
                vis[x][y+1] = true;
                next.push_back({x,y+1});
            }
        }
        ans += mn;
        curr.swap(next);
    }
    cout << ans;
}
