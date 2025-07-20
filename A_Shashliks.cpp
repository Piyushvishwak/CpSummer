#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n;
    cin >> n;
    vector<int> ans;
    for(int i=0; i<n; i++){
        int k,a, b, x, y;
        cin>>k>>a>>b>>x>>y;
        if(a<b){
            swap(a, b);
            swap(x, y);
        }
        int forB=0;
        if(k>=b)
            forB = ceil((double)(k-b+1)/y);

        int forA=0;
        if(k>=a){
            int forA1 = ceil((double)(k-a+1)/x);
            int temp = k - (forA1*x);
            int forA2 = ceil((double)(temp-b+1)/y);
            forA = forA1 + forA2;
        }

        ans.push_back(max(forA, forB));
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}