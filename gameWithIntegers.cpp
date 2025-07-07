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
        int a;
        cin>>a;
        if((a-1)%3==0 || (a+1)%3==0)
            ans.push_back("First");
        else
            ans.push_back("Second");
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}