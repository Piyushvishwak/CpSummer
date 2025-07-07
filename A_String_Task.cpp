#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        char c = tolower(s[i]);
        if(c =='a' || c =='e'  || c =='i' || c =='o' || c =='u' || c =='y'){
            continue;
        }
        else{
            cout<<'.'<<c;
        }
    }
    return 0;
}