#include <bits/stdc++.h>
using namespace std;

bool isSymmetric(const vector<int>& fence) {
    int n = fence.size();

    for (int i = 1; i < n; i++) {
        if (fence[i] > fence[i - 1]) return false;
    }

    int index = 0;
    for (int i = n - 1; i >= 0; i--) {
        int next = (i + 1 < n ? fence[i + 1] : 0);
        int count = fence[i] - next;

        while (count--) {
            if (index >= n || fence[index] != i + 1)
                return false;
            index++;
        }
    }

    return index == n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> fence(n);
        for (int i = 0; i < n; i++)
            cin >> fence[i];

        cout << (isSymmetric(fence) ? "YES\n" : "NO\n");
    }
    return 0;
}
