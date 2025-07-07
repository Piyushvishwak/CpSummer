#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<string> ans;
    while(n--){
        long long a;
        cin>>a;
        while(a%2==0){
            a/=2;
        }
        if(a>1){
            ans.push_back("YES");
        }
        else
            ans.push_back("NO");
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}