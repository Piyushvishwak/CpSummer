// #include <bits/stdc++.h>
// using namespace std;

// long long solve(long long n){
//     if(n<=0)    return 1;
//     vector<long long> dp(n+1);
//     dp[0]=1;
//     for(long long i=1; i<=n; i++){
//         dp[i] = dp[i/2]+dp[i/3];
//     }
//     return dp[n];
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     long long n;
//     cin >> n;
//     long long ans = solve(n);
//     cout<<ans;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> dp;

long long solve(long long n){
    if(n <= 0) return 1;
    if(dp.count(n)) return dp[n];
    return dp[n] = solve(n/2) + solve(n/3);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    cout << solve(n);
    return 0;
}