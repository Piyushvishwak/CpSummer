#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int t;
    cin >> t;
    vector<string> ans;
    for(int i=0; i<t; i++){
        int n, q;
        cin>>n>>q;
        vector<int> arr(n);
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int total = accumulate(arr.begin(), arr.end(), 0LL);
        for(int k=0; k<q; k++){
            int r1, r2, m;
            cin>>r1>>r2>>m;
            r1--; r2--;
            int old_sum = 0;
            for(int l=r1; l<=r2; l++){
                old_sum += arr[l];
            }
            long long new_sum = total - old_sum + 1LL * (r2 - r1 + 1) * m;
            if(new_sum % 2 == 1)
                ans.push_back("Yes");
            else
                ans.push_back("No");
        }
    }
    for(auto i : ans)   cout<<i<<"\n";
    return 0;
}