#include <bits/stdc++.h>
using namespace std;

long long solve(int idx, int W, vector<int>& w, vector<long long>& v, vector<vector<long long>>& dp) {
    if (idx < 0 || W == 0) return 0;
    if (dp[idx][W] != -1) return dp[idx][W];
    long long res = solve(idx - 1, W, w, v, dp);
    if (w[idx] <= W)
        res = max(res, v[idx] + solve(idx - 1, W - w[idx], w, v, dp));
    return dp[idx][W] = res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, W;
    cin >> N >> W;
    vector<int> w(N);
    vector<long long> v(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    vector<vector<long long>> dp(N, vector<long long>(W + 1, -1));
    long long ans = solve(N - 1, W, w, v, dp);
    cout << ans << endl;
    return 0;
}



// //just recursion
// #include <bits/stdc++.h>
// using namespace std;

// long long solve(int idx, int W, vector<int>& w, vector<long long>& v) {
//     if (idx < 0 || W == 0) return 0;
//     // Not pick
//     long long res = solve(idx - 1, W, w, v);
//     // Pick
//     if (w[idx] <= W)
//         res = max(res, v[idx] + solve(idx - 1, W - w[idx], w, v));
//     return res;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int N, W;
//     cin >> N >> W;
//     vector<int> w(N);
//     vector<long long> v(N);
//     for (int i = 0; i < N; i++) {
//         cin >> w[i] >> v[i];
//     }

//     long long ans = solve(N - 1, W, w, v);
//     cout << ans << endl;
//     return 0;
// }