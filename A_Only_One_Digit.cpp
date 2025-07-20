#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int num;
        cin>>num;
        vector<int> digits;
        while(num!=0){
            int rem=num%10;
            digits.push_back(rem);
            num/=10;
        }
        sort(digits.begin(), digits.end());
        ans.push_back(digits[0]);
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!