#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    string ans="";
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            ans += to_string(i)+"*";
            n/=i;
        }
    }
    if(n>1) ans+=to_string(n);
    int s = ans.size();

    if (!ans.empty() && ans.back() == '*') ans.pop_back();
    cout<<ans;
    return 0;
}