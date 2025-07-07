#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<string> ans;
    while (t--) {
        int a, x, y;
        cin>>a>>x>>y;
        bool found=false;
        for(int i=min(x, y); i<=max(x, y); i++){
            if(i==a)    continue;
            if(abs(a-x)>abs(i-x) && abs(y-a)>abs(i-y)){
                found=true;
                break;
            }
        }
        if(found)   ans.push_back("YES");
        else ans.push_back("NO");
    }
    for(auto i : ans)   cout<<i<<endl;
    return 0;
}