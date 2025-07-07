#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long balls;
    cin >> n >> balls;
    vector<long long> times(n);
    for (int i = 0; i < n; i++) {
        cin >> times[i];
    }

    long long left = 1, right = 1e18, ans = right;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long produced = 0;
        for (int i = 0; i < n; i++) {
            produced += mid / times[i];
            if (produced >= balls) break;
        }
        if (produced >= balls) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}