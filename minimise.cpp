#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i].first >> v[i].second;
    }
    vector<int> ans;
    for(int i = 0; i < v.size(); i++){
        int a=v[i].first;
        int b=v[i].second;
        cout<< b-a <<endl;
    }
    return 0;
}