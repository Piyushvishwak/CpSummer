#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dfs(vector<vector<int>>& mat, int i, int j, vector<vector<int>>& vis){
    if(i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || vis[i][j] || mat[i][j] == 0){
        return 0;
    }
    vis[i][j] = 1;
    int sum = mat[i][j];
    sum += dfs(mat, i+1, j, vis);
    sum += dfs(mat, i-1, j, vis);
    sum += dfs(mat, i, j+1, vis);
    sum += dfs(mat, i, j-1, vis);
    return sum;
}

int main(){
    foo;
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int a, b;
        cin >> a >> b;
        vector<vector<int>> mat(a, vector<int>(b));
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cin >> mat[i][j];
            }
        }

        vector<vector<int>> vis(a, vector<int>(b, 0));
        int maxi = 0;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(!vis[i][j] && mat[i][j] != 0){
                    int sum = dfs(mat, i, j, vis);
                    maxi = max(maxi, sum);
                }
            }
        }
        ans.push_back(maxi);
    }

    for(auto i : ans) cout << i << endl;
    return 0;
}
