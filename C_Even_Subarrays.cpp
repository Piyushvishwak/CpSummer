#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

int32_t main(){
    fastt;
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        vector<int> pre(n + 1), frq(2 * n);
        for(int i = 1; i <= n; i++) pre[i] = pre[i - 1] ^ a[i - 1];

        frq[0]++;
        int res = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 0; j * j < 2 * n; j++){
                int check = pre[i] ^ (j * j);
                if(check < 2 * n) res += frq[check];
            }
            frq[pre[i]]++;
        }

        ans.push_back((n * (n + 1)) / 2 - res);
    }

    for(auto i : ans) cout << i << endl;
    return 0;
}

// I did it!
