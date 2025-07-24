#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

int solve(vector<int>& values) {
    int sum = 0;
    int sign = 1;
    for (int i = 0; i < values.size(); ++i) {
        sum += sign * values[i];
        sign *= -1;
    }
    return sum;
}

int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int a;
        cin>>a;
        vector<int> values(a);
        for(int i=0; i<a; i++){
            cin>>values[i];
        }
        
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!
