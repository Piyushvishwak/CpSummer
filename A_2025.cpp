#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<vector<int>> ans;
    while(n--){
        string num;
        cin>>num;
        bool mark=false;
        
        int target = stoi(num);
        int root = sqrt(target);
        
        if(root * root == target) {
            for(int i = 0; i <= root; i++){
                int j = root - i;
                if(j >= 0) {
                    mark = true;
                    ans.push_back({i, j});
                    break;
                }
            }
        }
        
        if(!mark) ans.push_back({-1});
    }
    for(auto i : ans){
        for(auto j : i){
            cout<< j <<" ";
        }
        cout<<endl;
    }
    return 0;
}