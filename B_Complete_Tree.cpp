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
        int a;
        cin>>a;
        int sum=0;
        while(a>0){
            sum+=a;
            a=a/2;
        }
        ans.push_back(sum);
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!