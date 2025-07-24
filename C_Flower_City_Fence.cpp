#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_symmetric_fence(const vector<int>& fence) {
    int n = fence.size();
    vector<int> horizontal_fence;

    for (int i = n - 1; i >= 0; --i) {
        while (horizontal_fence.size() < fence[i]) {
            horizontal_fence.push_back(i + 1);
        }
    }

    if (fence.size() != horizontal_fence.size()) {
        return false;
    }
    for (int i = 0; i < n; ++i) {
        if (fence[i] != horizontal_fence[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> fence(n);
        for (int i = 0; i < n; ++i) {
            cin >> fence[i];
        }

        if (is_symmetric_fence(fence)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}