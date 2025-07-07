#include <bits/stdc++.h>
using namespace std;

int minOp(vector<int> arr){
    if (arr.size()<2)    return 0;
    for(int i=0; i<arr.size()-1; i++){
        if(abs(arr[i]-arr[i+1])<=1){
            return 0;
        }
    }
    return arr.size()==2?    -1 : 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int a = minOp(arr);
        ans.push_back(a);
    }
    for(int i : ans)    cout<<i<<endl;
    return 0;
}