#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,1,1,2,2,3};
    int k=2;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    unordered_map<int ,int> mpp;
    for(auto i : arr)   mpp[i]++;
    for(auto i : mpp){
        pq.push({i.second, i.first});
        if(pq.size() > k)
            pq.pop();
    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    for(auto i : ans){
        cout<<i<<" ";
    }
}