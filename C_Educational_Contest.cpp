#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        bool found = false;
        string result = "";
        
        for(int i = 1; i < n; i++){
            string a = s.substr(0, i);
            string b = s.substr(i);
            
            if(b[0] == '0') continue;
            
            bool bg = false;
            if(b.length() > a.length()) {
                bg = true;
            } else if(b.length() == a.length()) {
                bg = (b > a);
            }
            
            if(bg){
                result = a + " " + b;
                found = true;
            }
        }
        
        if(!found){
            ans.push_back("-1");
        } else {
            ans.push_back(result);
        }
    }
    for(auto i : ans) cout << i << endl;
    return 0;
}
// I did it!