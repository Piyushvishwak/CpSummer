#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<string> res;
    int ans=0;
    while(n--){
        int a, b, c;
        cin>>a>>b>>c;
        if((a==1 && b==1) || (c==1 && a==1) || (b==1 && c==1) || (a==1 && b==1 && c==1)){
            ans++;
        }
    }
    cout<< ans;
    return 0;
}