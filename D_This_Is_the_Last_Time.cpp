#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<int> ans;

    while(n--){
        int s, k;
        cin >> s >> k;

        vector<tuple<int, int, int>> casinos(s);
        for(int i = 0; i < s; i++){
            int l, r, real;
            cin >> l >> r >> real;
            casinos[i] = {l, r, real};
        }

        bool changed = true;
        while(changed){
            changed = false;
            for(int i = 0; i < s; i++){
                auto [l, r, real] = casinos[i];
                if(k >= l && k <= r && real > k){
                    k = real;
                    changed = true;
                }
            }
        }

        ans.push_back(k);
    }

    for(auto i : ans) cout << i << endl;
    return 0;
}
