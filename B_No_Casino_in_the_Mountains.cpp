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
        int days, k;
        cin>>days>>k;
        vector<int> arr(days);
        for(int i=0; i<days; i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i = 0; i <= days - k; ) {
            int c = 0;
            while(c < k && arr[i + c] == 0) {
                c++;
            }
            if(c == k) {
                count++;
                i += k + 1;
            } else {
                i++;
            }
        }

        ans.push_back(count);

    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!