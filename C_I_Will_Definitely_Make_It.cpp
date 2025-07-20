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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        int init = arr[k-1];
        set<int> s;
        for(int i=0; i<n; i++){
            if(arr[i]>=init)
                s.insert(arr[i]);
        }
        bool escape=true;
        int prev = init;
        for(auto i : s){
            if(i-prev > init){
                escape = false;
            }
            prev = i;
        }
        if(escape)  ans.push_back("YES");
        else    ans.push_back("NO");
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!