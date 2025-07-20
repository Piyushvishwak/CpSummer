#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main() {
    fastt;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        k--; // 0-based index
        vector<int> h(n);
        for (int i = 0; i < n; ++i) cin >> h[i];

        int maxH = *max_element(h.begin(), h.end());
        if (h[k] == maxH) {
            cout << "YES\n";
            continue;
        }

        int l = k, r = k;
        int water = 1;
        bool can = false;

        while (true) {
            int new_l = l, new_r = r;
            for (int i = l; i <= r; ++i) {
                if (h[i] < water) continue;
                if (h[i] == maxH) can = true;
                if (i > 0 && h[i - 1] >= water + abs(h[i] - h[i - 1])) new_l = min(new_l, i - 1);
                if (i + 1 < n && h[i + 1] >= water + abs(h[i] - h[i + 1])) new_r = max(new_r, i + 1);
            }
            if (can) break;
            if (new_l == l && new_r == r) break; // no progress
            l = new_l;
            r = new_r;
            water++;
        }

        cout << (can ? "YES" : "NO") << '\n';
    }
    return 0;
}
