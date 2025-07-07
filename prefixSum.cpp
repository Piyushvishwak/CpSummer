#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin >> n >> q;
        vector<int> a(n);
        for(auto& i: a) cin >> i;

        vector <int> prefix(n+1); // kyuki sirf n size par first element hamesha 0 hi hoga cuz no sum
        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i-1] + a[i-1];
        }
    }
    return 0;
}


// hashmap O(1)->unordered_map
// treemap O(logn)->map->red-black tree