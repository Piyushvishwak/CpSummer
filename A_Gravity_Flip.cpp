#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n;
    cin >> n;
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        cin >> ans[i];
    }
    sort(ans.begin(), ans.end());
    for(int i : ans)    cout<<i<<" ";
    return 0;
}