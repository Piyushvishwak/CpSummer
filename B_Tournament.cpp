#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int maxi=*max_element(a.begin(), a.end());
        if(k>=2)    cout<<"YES\n";
        else{
            // aj-1 is highest then yes else no
            if(maxi==a[j-1])    cout<<"YES\n";
            else    cout<<"NO\n";
        }
    }
    return 0;
}