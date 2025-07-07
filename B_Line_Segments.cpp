#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long S = 0;
        long long M = 0;
        for (long long num : a) {
            S += num;
            if (num > M) M = num;
        }

        long long dx = abs(px - qx);
        long long dy = abs(py - qy);
        long long D_sq = dx * dx + dy * dy;
        long long S_sq = S * S;
        long long L_val = (2 * M > S) ? (2 * M - S) : 0;
        long long L_sq = L_val * L_val;

        if (D_sq <= S_sq && D_sq >= L_sq) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}