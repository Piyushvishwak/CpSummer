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
        ans.push_back(n-1);
    }
    for(auto& i : ans){
        cout<<i<<endl;
    }
    return 0;
}