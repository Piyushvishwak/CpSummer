#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define begin v.begin(), v.end()
#define fastt ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int t;
    cin >> t;
    vs ans;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vi freq(26, 0);
        for(int i=0; i<n; i++){
            freq[s[i] - 'a']++;
        }
        int count=0;
        for(auto i : freq){
            count += i%2;
        }
        if(count <= k+1)    ans.pb("YES");
        else    ans.pb("NO");
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!!