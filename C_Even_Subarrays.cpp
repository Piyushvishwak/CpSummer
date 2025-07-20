#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int a;
        cin>>a;
        vector<int> arr(a);
        for(int i=0; i<a; i++){
            cin>>arr[i];
        }
        int sum=0;
        vector<int> mpp(a, 0);
        for(int i=1; i<a; i++){
            sum^=arr[i];
            for(int j=0; j<i; j++){
                
            }
        }
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!