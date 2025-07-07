#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n;
    cin >> n;
    vector<string> ans;
    for(int i=0; i<n; i++){
        int a, b, c, d;
        cin >>a>>b>>c>>d;
        if(min(a, c)>=min(b,d)){
            ans.push_back("Gellyfish");
        }
        else{
            ans.push_back("Flower");
        }
        
    }
    for(auto i : ans)   cout<<i<<"\n";
    return 0;
}