#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n, t;
    cin >> n >> t;
    vector<int> prices(n);
    vector<int> pages(n);
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin>>prices[i];
    }
    for(int i=0; i<n; i++){
        cin>>pages[i];
    }
    vector<pair<int, int>> pp;
    for(int i=0; i<n; i++){
        pp.push_back({prices[i], pages[i]});
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}