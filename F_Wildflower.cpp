#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}