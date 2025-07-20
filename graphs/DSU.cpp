#include<bits/stdc++.h>
using namespace std;

class DSU{
    vector<int> parent, rank;
    public:
    DSU(int n){
        parent.resize(n);
        rank.resize(n);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int node){
        if(parent[node]!=node){
            parent[node]=find(parent[node]);
        }
        return parent[node];
    }
    void uni(int a, int b){
        int pa=find(a), pb=find(b);
        if(rank[pa]>rank[pb]){
            parent[pb]=pa;
        }
        else if(rank[pb]>rank[pa]){
            parent[pa]=pb;
        }
        else{
            parent[pa]=pb;
            rank[pb]++;
        }
    }
};