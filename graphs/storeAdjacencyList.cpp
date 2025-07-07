#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; // number of nodes (0 to 4)
    vector<pair<int, int>> edges = {{0, 1}, {0, 4}, {1, 2}, {1, 4}, {2, 3}};
    vector<vector<int>> adj(n);

    for (auto [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u); // because undirected
    }

    // Print adjacency list
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int v : adj[i])
            cout << v << " ";
        cout << endl;
    }
    return 0;
}