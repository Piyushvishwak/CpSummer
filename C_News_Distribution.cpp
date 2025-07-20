#include <bits/stdc++.h>
#define int long long
#define fastt ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &vis, set<int> &group) {
    vis[node] = 1;
    group.insert(node);

    for (int nbr : adj[node]) {
        if (!vis[nbr]) {
            dfs(nbr, adj, vis, group);
        }
    }
}

int32_t main() {
    fastt;
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; ++i) {
        int sz;
        cin >> sz;
        vector<int> grp(sz);
        for (int j = 0; j < sz; ++j) cin >> grp[j];

        for (int j = 0; j < sz - 1; ++j) {
            adj[grp[j]].push_back(grp[j + 1]);
            adj[grp[j + 1]].push_back(grp[j]);
        }
    }

    vector<int> vis(n + 1, 0), ans(n + 1);
    vector<set<int>> comps;

    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            set<int> group;
            dfs(i, adj, vis, group);
            comps.push_back(group);
        }
    }

    for (auto &comp : comps) {
        int sz = comp.size();
        for (int node : comp) {
            ans[node] = sz;
        }
    }

    for (int i = 1; i <= n; ++i) cout << ans[i] << " ";
    return 0;
}
