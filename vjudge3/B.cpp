#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int num;
    cin>>num;
    vector<pair<int, int>> ans;
    
    for(int i=0; i<num; i++){
        int n, m;
        cin >> m>> n;
        vector<vector<char>> mat(m, vector<char>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> mat[i][j];
            }
        }
        int r = 0, maxi =0 ;
        for(int i=0; i<m; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if (mat[i][j] == '#') {
                    count++;
                }
            }
            if(count > maxi){
                maxi = count;
                r = i;
            }
        }

        int start =-1 , end = -1;
        for(int i = 0; i<n; i++){
            if(mat[r][i]=='#'){
                if(start == -1) start = i;
                end = i;
            }
        }
        
        int c = (start + end)/2;
        ans.push_back({r+1, c+1});
    }
    for(auto& [i, j] : ans) cout<<i<<" "<<j<<endl;
    return 0;
}