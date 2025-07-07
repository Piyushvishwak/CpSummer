#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    string s;
    cin>>s;

    set<char> mpp;
    for(auto i : s)
        mpp.insert(i);

    if(mpp.size() % 2==0)
        cout<<"CHAT WITH HER!";
    else if(mpp.size() % 2==1)
        cout<<"IGNORE HIM!";
    return 0;
}