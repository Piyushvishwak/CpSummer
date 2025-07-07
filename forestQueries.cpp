#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m, q;
    cin >> m>>q;
    vector<vector<char>> mat(m, vector<char>(m));
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    vector<vector<int>> ans(m+1, vector<int>(m+1, 0));
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            int val = mat[i-1][j-1]=='*' ? 1 : 0;
            ans[i][j]=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1] + val;
        }
    }
    vector<int> res;
    while(q--){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        res.push_back(ans[x2][y2] - ans[x1-1][y2] - ans[x2][y1-1] + ans[x1-1][y1-1]);
    }
    for(auto  i : res)  cout<<i<<endl;
    return 0;
}