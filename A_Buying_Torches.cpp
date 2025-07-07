#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    long long n;
    cin >> n;
    vector<long long> ans;
    for(long long i=0; i<n; i++){
        long long x,y,k;
        cin>>x>>y>>k;
        long double coal,sticks,div,need;
        long long ans = 0;
        coal = sticks = div = 0;
        coal = y * k;
        sticks = coal + (k-1);
        div = ceil(sticks/(x-1));
        ans = div + k;
        cout<<ans<<endl;
    }
    for(auto i : ans)   cout<<i<<"\n";
    return 0;
}