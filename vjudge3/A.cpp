#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    foo;
    vector<vector<string>> v(8, vector<string>(8));
    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            v[i-1][j-1] = string(1, 'a' + (j-1)) + to_string(i);
        }
    }
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int row = s[1] - '1';
        int col = s[0] - 'a';

        for(int j=0; j<8; j++) {
            if(j != col) cout << v[row][j] << "\n";
        }
        for(int i=0; i<8; i++) {
            if(i != row) cout << v[i][col] << "\n";
        }
        cout << "\n";
    }
    return 0;
}