#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    long long t;
    cin >> t;
    vector<long long> ans;
    for(long long i=0; i<t; i++){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long j=0; j<n; j++){
            cin>>arr[j];
        }
        unordered_map<long long, long long> mpp;
        for(long long j=0; j<n; j++){
            mpp[arr[j]-j]++;
        }
        long long count=0;
        for(auto &p : mpp){
            long long k = p.second;
            count+= k*(k-1)/2;
        }
        ans.push_back(count);
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}