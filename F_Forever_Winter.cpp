#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    foo;
    int t;
    cin >> t;
    vector<pair<int, int>> ans;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        vector<vector<int>> graph(n+1);
        for(int i=0; i<m; i++){
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int corner=0;
        int x=0;
        for(int i=1; i<=n; i++){
            if(graph[i].size() == 1){
                corner=i;
                break;
            }
        }
        int y=0;
        int middle=graph[corner][0];
        y=graph[middle].size()-1;

        for(auto c : graph[middle]){
            if(graph[c].size()!=1){
                x=graph[c].size();
                break;
            }
        }
        ans.push_back({x, y});
    }
    for(auto i : ans)  cout << i.first<<" "<<i.second << endl;
    return 0;
}