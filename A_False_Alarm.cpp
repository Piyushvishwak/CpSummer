#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define begin v.begin(), v.end()
#define fastt ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int t;
    cin >> t;
    vs res;
    while(t--){
        int n, x;
        cin >> n >> x;
        vi all(n);
        for(int i=0; i<n; i++){
            cin>>all[i];
        }
        int i=0;
        bool used=false;
        while(i<n){
            if(all[i]==1 && !used){
                used=true;
                i+=x;
            }
            else if(all[i]==1 && used){
                break;
            }
            else{
                i++;
            }
        }
        if(i>=n-1) res.pb("YES");
        else    res.pb("NO");
    }
    for(auto i : res)  cout << i << endl;
    return 0;
}
// I did it!!