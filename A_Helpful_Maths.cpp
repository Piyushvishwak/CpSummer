#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    string s;
    cin >> s;
    vector<int> v;
    for(auto i : s){
        if(i != '+')   v.push_back(i - '0');
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        cout << v[i] << '+';
    }
    cout<<v[v.size()-1];
    return 0;
}