#include <bits/stdc++.h>
using namespace std;
vector<int> freq;
int sol(int num){
    if(num==0)  return 0;
    if(num==1)  return freq[num];
    return max(sol(num-1), num*freq[num]+sol(num-2));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> v(t);
    int maxi=0;
    for(int i=0; i<t; i++){
        cin>>v[i];
        maxi=max(maxi, v[i]);
    }
    freq.assign(maxi+1, 0);
    for(int i=0; i<t; i++) freq[v[i]]++;
    cout<<sol(maxi);
    return 0;
}
