#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& v, int k){
    int n = v.size();
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;

    for(int i = 1; i < n; i++){
        for(int j = 1; j <= k; j++){
            if(i - j >= 0){
                dp[i] = min(dp[i], dp[i - j] + abs(v[i] - v[i - j]));
            }
        }
    }
    return dp[n - 1];
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << solve(v, k);
}
