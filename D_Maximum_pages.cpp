#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> h(n), s(n);
    for(int &v : h) cin >> v;
    for(int &v : s) cin >> v;

    vector<long long> dp(x + 1, 0);

    for(int i = 0; i < n; i++) {
        int cost = h[i], pages = s[i];
        for(int j = x; j >= cost; j--) {
            dp[j] = max(dp[j], dp[j - cost] + pages);
        }
    }

    long long best = 0;
    for(int j = 0; j <= x; j++) best = max(best, dp[j]);
    cout << best << "\n";
    return 0;
}
