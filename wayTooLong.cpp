#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<string> res;
    while(n--){
        string word;
        cin>>word;
        string ans="";
        if(word.length()>10){
            ans+=word[0];
            ans+=to_string(word.size()-2);
            ans+=word[word.size()-1];
            res.push_back(ans);
        }
        else{
            res.push_back(word);
        }
    }
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<endl;
    }
    return 0;
}