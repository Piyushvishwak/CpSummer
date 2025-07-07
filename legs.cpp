#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int> ans;
    while(n--){
        int a;
        cin>>a;
        if(a%4==0)
            ans.push_back(a/4);
        else 
            ans.push_back((a/4)+1);
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}