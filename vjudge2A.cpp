#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int n, k, count = 0;
        cin >> n >> k;
        if (k == 1) {
            count = n;
        } else {
            while (n > 0) {
                count += n % k;
                n /= k;
            }
        }
        ans.push_back(count);
    }
    for(auto i : ans) cout << i << endl;
    return 0;
}