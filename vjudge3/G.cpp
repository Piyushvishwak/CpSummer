#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m = n - 1;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if ((m & i) == i) {
            res ^= a[i];
        }
    }
    cout << res << endl;
    return 0;
}