#include <bits/stdc++.h>
using namespace std;

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
        int count=0;
        int maxCount=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0)   count++;
            else    count=0;
            maxCount=max(count, maxCount);
        }
        ans.push_back(maxCount);
    }
    for(auto& i : ans)  cout<<i<<endl;
    return 0;
}