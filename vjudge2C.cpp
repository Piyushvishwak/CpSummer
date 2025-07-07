#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& v){
    int n = v.size();
    vector<int> dp(n, 0);
    dp[0] = 0;
    dp[1] = abs(v[1] - v[0]);
    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i-1] + abs(v[i] - v[i-1]), dp[i-2] + abs(v[i] - v[i-2]));
    }
    return dp[n-1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> v(t);
    for(int i=0; i<t; i++) {
        cin >> v[i];
    }
    int ans = solve(v);
    cout << ans;
    return 0;
}