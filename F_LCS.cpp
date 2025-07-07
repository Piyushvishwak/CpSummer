// #include <bits/stdc++.h>
// using namespace std;
// void subsequence(string st, vector<string>& all, string temp, int i){
//     if(i==st.size()){
//         all.push_back(temp);
//         return;
//     }
//     //pick
//     temp.push_back(st[i]);
//     subsequence(st, all, temp, i+1);
//     //not pick
//     temp.pop_back();
//     subsequence(st, all, temp, i+1);
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     string s, t;
//     cin>>s>>t;

//     vector<string> allS;
//     string temp="";
//     subsequence(s, allS, temp, 0);

//     vector<string> allT;
//     subsequence(t, allT, temp, 0);

//     string ans="";
//     for(auto i : allS){
//         for(auto j : allT){
//             if(i==j && ans.size() < i.size()){
//                 ans=i;
//             }
//         }
//     }
//     cout<<ans;
//     return 0;
// }

// recursive dp

#include <bits/stdc++.h>
using namespace std;

string lcs(int n, int m, const string& s, const string& t, vector<vector<string>>& dp) {
    if (n == 0 || m == 0) return "";
    if (dp[n][m] != "") return dp[n][m];
    if (s[n-1] == t[m-1])
        return dp[n][m] = lcs(n-1, m-1, s, t, dp) + s[n-1];
    string a = lcs(n-1, m, s, t, dp);
    string b = lcs(n, m-1, s, t, dp);
    return dp[n][m] = (a.size() > b.size() ? a : b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<vector<string>> dp(n+1, vector<string>(m+1, ""));
    cout << lcs(n, m, s, t, dp) << endl;
    return 0;
}