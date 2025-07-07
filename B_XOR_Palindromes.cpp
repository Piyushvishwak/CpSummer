#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int n;
        string s;
        cin >> n >> s;

        int ans = 0, max2 = 0;
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-1-i]) ans++;
            else max2++;
        }

        vector<char> t(n+1, '0');
        for(int j = 0; j <= max2; j++){
            int base = ans + 2*j;
            t[base] = '1';
            if(n % 2 == 1) t[base + 1] = '1';
        }

        cout << string(t.begin(), t.end()) << "\n";
    }
    return 0;
}
