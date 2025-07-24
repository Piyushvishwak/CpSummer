#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
bool valid(string s, int st, int e){
    while(st<e){
        if(s[st]!=s[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;
}

bool validPalindrome(string s) {
    int n=s.size();
    int st=0;
    int e=n-1;
    while(st<e){
        if(s[st]!=s[e]){
            return valid(s, st+1, e) || valid(s, st, e-1);
        }
        st++;
        e--;
    }
    return true;
}

int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int size, todelete;
        cin>>size>>todelete;
        string s;
        cin>>s;
        
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!