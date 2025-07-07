#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        unordered_map<long long,int> freq;
        int ans = 1;  // minimum answer is 1

        for(int i = 0; i < n; i++){
            long long diff = a[i] - (i + 1);
            freq[diff]++;
            ans = max(ans, freq[diff]);
        }

        cout << ans << "\n";
    }

    return 0;
}
