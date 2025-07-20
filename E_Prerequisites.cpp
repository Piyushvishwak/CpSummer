#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void dfs(vector<vector<int>>&adj,vector<int>&vis,set<int>&already,vector<int>&ans,int node)
{
    vis[node]=1;
    for(auto &it:adj[node])
    {
        if(!vis[it])
        {
            dfs(adj,vis,already,ans,it);
            /*if(already.find(it)==already.end())
            {
                ans.push_back(it);
                already.insert(it);
            }*/
        }
    }
    if(node>1&&already.find(node)==already.end())
    {
        ans.push_back(node);
        already.insert(node);
    }
}
int main(){
    foo;
    int n;
    cin >> n;
    vector<vector<int>>adj(n+1);
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        for(int j=0;j<c;j++)
        {
            int inp;
            cin>>inp;
            adj[i].push_back(inp);
        }
    }
    set<int>already;
    vector<int>ans,vis(n+1);
    dfs(adj,vis,already,ans,1);
    for(auto &it:ans) cout<<it<<" ";
    return 0;
}