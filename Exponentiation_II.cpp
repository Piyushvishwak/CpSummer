#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int power(int x, int n, int mod) {
    int res = 1;
    x = x % mod;
    while (n > 0) {
        if (n & 1) {
            res = (1LL * res * x) % mod;
        }
        x = (1LL * x * x) % mod;
        n = n >> 1;
    }
    return res;
}


int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<int> ans;
    int mod=1e9 + 7;
    while(n--){
        int a, b, c;
        cin>>a>>b>>c;
        int temp = power(b, c, mod-1);
        int res = power(a, temp, mod);
        ans.push_back(res);
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!