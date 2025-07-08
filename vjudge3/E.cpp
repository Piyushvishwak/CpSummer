#include <bits/stdc++.h>
using namespace std;

bool solve(int idx, int sum, const vector<int>& arr) {
    if (idx == arr.size()) {
        return (sum % 360 + 360) % 360 == 0;
    }
    return solve(idx + 1, sum + arr[idx], arr) || solve(idx + 1, sum - arr[idx], arr);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (solve(0, 0, arr)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}