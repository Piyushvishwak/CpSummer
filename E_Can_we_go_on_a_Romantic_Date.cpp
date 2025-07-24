#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<string> ans;
    while(n--){
        int a;
        cin >> a;
        vector<int> arr(a);
        for(int i = 0; i < a; i++){
            cin >> arr[i];
        }

        vector<int> prefixEven(a), prefixOdd(a);

        for(int i = 0; i < a; i++){
            if(i == 0){
                prefixOdd[0] = arr[0];
                prefixEven[0] = 0;
            } else {
                prefixOdd[i] = prefixOdd[i - 1];
                prefixEven[i] = prefixEven[i - 1];
                if(i % 2 == 0) prefixOdd[i] += arr[i];
                else prefixEven[i] += arr[i];
            }
        }

        map<int, int> mpp;
        mpp[0] = -1;
        bool mark = false;

        for(int i = 0; i < a; i++){
            int odd = prefixOdd[i];
            int even = prefixEven[i];
            int diff = odd - even;
            if(mpp.count(diff)){
                mark = true;
                break;
            }
            mpp[diff] = i;
        }

        ans.push_back(mark ? "YES" : "NO");
    }

    for(auto &i : ans) cout << i << endl;
    return 0;
}
