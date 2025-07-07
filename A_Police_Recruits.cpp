#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    int count1 = 0;
    int countm1 = 0;
    int ans = 0;
    while (t--) {
        int n;
        cin >> n;
        if(n > 0){
            count1 += n;
        }
        else{
            if(count1 > 0){
                count1--;
            }else{
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}