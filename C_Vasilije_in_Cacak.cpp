#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k>> x;
        long long minSum = k*(k+1)/2;
        long long maxSum = k*n - (k*(k-1))/2;
        if(x>=minSum && x<=maxSum)
            cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}