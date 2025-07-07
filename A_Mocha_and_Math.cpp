#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int res = a[0];
        for(int i=1; i<a.size(); i++){
            res = res & a[i];
        }
        ans.push_back(res);
    }
    for(auto i : ans)   cout<<i<<"\n";
    return 0;
}