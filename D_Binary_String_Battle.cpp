#include <iostream>
#include <string>
using namespace std;

bool has_full_ones_window(const string& s, int k) {
    int count = 0;
    for (int i = 0; i < k; ++i)
        count += (s[i] == '1');
    if (count == k) return true;
    for (int i = k; i < s.size(); ++i) {
        count += (s[i] == '1') - (s[i - k] == '1');
        if (count == k) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int one_count = 0;
        for (char c : s)
            one_count += (c == '1');

        if (one_count == 0) {
            cout << "Alice\n"; // Already all zero
        } else if (one_count <= k) {
            cout << "Alice\n"; // She can zero all in one move
        } else if (has_full_ones_window(s, k)) {
            cout << "Bob\n"; // Bob can always fight back
        } else {
            cout << "Alice\n"; // No full window, she can win eventually
        }
    }
    return 0;
}
