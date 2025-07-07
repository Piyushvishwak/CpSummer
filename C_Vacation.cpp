// #include <bits/stdc++.h>
// using namespace std;

// int score(vector<vector<int>>& all, int last, int n, vector<vector<int>>& dp){
//     if(n==0)    return 0;
//     if(dp[n][last]!=-1) return dp[n][last];
//     int a=0, b=0, c=0;
//     if(last==0){
//         b = score(all, 1, n-1, dp)+all[n-1][1];
//         c = score(all, 2, n-1, dp)+all[n-1][2];
//     }
//     if(last==1){
//         a = score(all, 0, n-1, dp)+all[n-1][0];
//         c = score(all, 2, n-1, dp)+all[n-1][2];
//     }
//     if(last==2){
//         a = score(all, 0, n-1, dp)+all[n-1][0];
//         b = score(all, 1, n-1, dp)+all[n-1][1];
//     }
//     return dp[n][last] = max({a, b, c});
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<vector<int>> all(n, vector<int>(3));
//     vector<vector<int>> dp(n+1, vector<int>(3, -1));
//     for(int i = 0; i < n; i++) {
//         cin >> all[i][0] >> all[i][1] >> all[i][2];
//     }
//     cout << max({score(all, 0, n, dp), score(all, 1, n, dp),score(all, 2, n, dp)});
//     return 0;
// }



// bottom up
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int>> all(n, vector<int>(3));
    for(int i = 0; i < n; i++) {
        cin >> all[i][0] >> all[i][1] >> all[i][2];
    }

    vector<vector<int>> dp(n, vector<int>(3, 0));
    dp[0][0] = all[0][0];
    dp[0][1] = all[0][1];
    dp[0][2] = all[0][2];

    for(int i = 1; i < n; i++) {
        dp[i][0] = all[i][0] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = all[i][1] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = all[i][2] + max(dp[i-1][0], dp[i-1][1]);
    }

    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    return 0;
}

