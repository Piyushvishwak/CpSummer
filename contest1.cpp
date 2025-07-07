#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> res;
    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        int maxi=*max_element(x.begin(), x.end());
        int mini=*min_element(x.begin(), x.end());
        int ans=(maxi-mini)+min(abs(maxi-s), abs(s-mini));
        res.push_back(ans);
    }
    for(auto a : res)   cout<<a<<endl;

    return 0;
}
