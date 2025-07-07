#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n;
    cin >> n;
    vector<string> res;
    for(int i=0; i<n; i++){
        int t;
        string ans;
        cin >> t;
        cin >> ans;
        bool mark=false;
        for(int i=1; i<ans.size()-1; i++){
            string a = ans.substr(0, i);
            char b = ans[i];
            string c = ans.substr(i+1);
            if((a+c).find(b)!=string::npos){
                mark=true;
                break;
            }
        }
        if(mark)    res.push_back("Yes");
        else    res.push_back("No");
    }
    for(auto i : res)   cout<<i<<"\n";
    return 0;
}